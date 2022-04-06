#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define MAX_STACK_SIZE 100
#define MAX_EXPR_SIZE 100
typedef enum{
    lparen, rparen, plus, minus, times, divide, mod, eos, operand, blank
}precedence;


int stack[MAX_STACK_SIZE];
double dbl_stack[MAX_STACK_SIZE];
char expr[MAX_EXPR_SIZE];

char post_expr[MAX_EXPR_SIZE];
int post_i=0;

static int isp[] = {0, 19, 12, 12, 13, 13, 13, 0};
static int icp[] = {20, 19, 12, 12, 13, 13, 13, 0};


void add(int*, int);
char put_token(int n);
double eval(void);
precedence get_token(char *, int*);
void postfix(void);
void Get_line(char *); //getline?ù¥?ùº?äî ?ù¥Î¶ÑÏùò ?õêÎ≥? ?ï®?àòÍ∞? Ï°¥Ïû¨?ï¥?Ñú Î∞îÍøà
void print_token(int);
int popstack(int *);
double pop(int* top);

int main(int argc, char *argv[])
{
    int ires;
    double dres;
    
    FILE *fp;
    fp = fopen("C:\\Users\\user\\Documents\\test.txt", "r");
    fscanf(fp, "%s", expr);
    while(strcmp(expr, "END-OF-INPUT")){
        printf("¿‘∑¬ Ω∫∆Æ∏µ : %s\n", expr);
        expr[strlen(expr)-1] = '\0';

        postfix();
        post_i = 0;
        printf("Postfix «¸≈¬ : %s\n", post_expr);

        dres = eval();
        ires = (int)dres;

        printf("∞ËªÍ ∞·∞˙: %d\n\n",ires);
        fscanf(fp, "%s", expr);
    }
    printf("END-OF-OUtPUT\n");

    return 0;
}

void Get_line(char *s)
{
    int c, i;

    for(i=0;(c=getchar()) !='\n'; ++i)
        if(c!=' ' && MAX_EXPR_SIZE>i) *s++ = c;
    s = '\0';
}


void postfix(void)
{
    char symbol;
    precedence token;
    int token2;
    int n = 0;
    int top = 0;        // insert eos
    stack[0] = eos;
    int oprcnt = 0;
    char opr[10];

    for(token = get_token(&symbol, &n); token != eos; token = get_token(&symbol, &n))
    {
        if(token == operand)
        {
            //printf("%c",symbol);
            post_expr[post_i++] = symbol;
            token = get_token(&symbol, &n); 
            if(token == operand) {
                n--;
                continue;
            }
            else {
                n--;
                post_expr[post_i++] = ' ';
                continue;
            }
            
           
        }
        else if(token == rparen)
        {
            while(stack[top] != lparen){
               token2 = popstack(&top);         
              //print_token(token2);        
               post_expr[post_i++] = put_token(token2);
               post_expr[post_i++] = ' ';
            }
            popstack(&top);
        }
        else
        {
            while(isp[stack[top]] >= icp[token])
            {
                token2 = popstack(&top);
                //print_token(token2);
                post_expr[post_i++] = put_token(token2);
                post_expr[post_i++] = ' ';
            }
            add(&top, token);
        }
    }

    while((token = popstack(&top)) != eos)
    {
        //print_token(token);
        post_expr[post_i++] = put_token(token);
        post_expr[post_i++] = ' ';
    }

    post_expr[--post_i] = '\0';
    //printf("\n");
}


precedence get_token(char* symbol, int* n)
{
    *symbol = expr[(*n)++];
    switch(*symbol)
    {
    case '-':    return minus;
    case '(':    return lparen;
    case ')':    return rparen;
    case '+':    return plus;
    case '/':    return divide;
    case '*':    return times;
    case '%':    return mod;
    case '\0': return eos;
    default:     return operand;
    }
}

precedence get_token2(char* symbol, int* n)
{
    *symbol = post_expr[(*n)++];
    switch(*symbol)
    {
    case '-':    return minus;
    case '(':    return lparen;
    case ')':    return rparen;
    case '+':    return plus;
    case '/':    return divide;
    case '*':    return times;
    case '%':    return mod;
    case '\0': return eos;
    case ' ':     return blank;
    default:     return operand;
    }
}

void print_token(int n)
{
   printf("%c",put_token(n));
}

char put_token(int n)
{
    switch(n)
    {
    case minus:     return '-';
    case lparen:    return '(';
    case rparen:    return ')';
    case plus:     return '+';
    case divide:    return '/';
    case times:     return '*';
    case mod:     return '%';
    case eos:     return '\0';
    default : return "";
    }
}

int popstack(int* top)
{
    return stack[(*top)--];
}

double pop(int* top)
{
    return dbl_stack[(*top)--];
}

void add(int* top, int token)
{
    stack[++*top] = token;
}

void add2(int* top, double token) //add?ï®?àò Ï§ëÎ≥µ ; ?ù¥Î¶? Î∞îÍøîÏ£ºÎ©¥ ?ê®
{
    dbl_stack[++*top] = token;
}


double eval(void)
{
    precedence token;
    char symbol;
    double op1, op2;
    int n = 0;
    int top = -1;
    //token = get_token2(&symbol, &n);
    char szLine[100];
    int cnt=0;

    while((token = get_token2(&symbol, &n)) != eos)
    {
        if(token == blank) continue;    
        if(token == operand)
        {
            szLine[cnt++] = symbol;
            while((token = get_token2(&symbol, &n)) != blank)
            {
                szLine[cnt++] = symbol;
            }
            szLine[cnt] = '\0';            
            add2(&top, atof(szLine));
            //printf("(%s)",szLine);
            cnt = 0;
        //    n++;
        }
        else
        {
            op2 = pop(&top); // delete stack
            op1 = pop(&top);

            //printf("%lf, %lf\n", op1, op2);
            switch(token)
            {
            case plus:
                add2(&top, op1+op2);
                break;
            case minus :
                add2(&top, op1 - op2);
                break;
            case times :
                add2(&top, op1 * op2);
                break;
            case divide:
                add2(&top, op1 / op2);
                break;
            case mod :
                add2(&top, (int)op1 % (int)op2);
                break;
            default : break;
            }        
        }
    }

    return pop(&top);    // return result
}