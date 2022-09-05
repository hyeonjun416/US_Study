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
void Get_line(char *); //getline이라는 이름의 원본 함수가 존재해서 바꿈
void print_token(int);
int rmstack(int *);
double pop(int* top);

int main(int argc, char *argv[])
{
    int ires;
    double dres;
    
    Get_line(expr);

   
    postfix();


   
    dres = eval();
    ires = (int)dres;

    if((dres-ires)>0)
        printf("%lf",dres);
    else
        printf("%d",ires);

    printf("\n");

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

    for(token = get_token(&symbol, &n); token != eos; token = get_token(&symbol, &n))
    {
        if(token == operand)
        {
            printf("%c",symbol);
            post_expr[post_i++] = symbol;            
            /*while((token = get_token(&symbol, &n)) == operand) // while문 실행하려고 get_token한번더 실행되면서 
                                                                 // 건너뛰는 문자 생김
            {
                printf("%c",symbol);
                post_expr[post_i++] = symbol;
            }*/
            //--n; //필요없음
            post_expr[post_i++] = ' ';
            //printf(" "); // equal reason line 88
        }
        else if(token == rparen)
        {
            while(stack[top] != lparen){
               token2 = rmstack(&top);         
               print_token(token2);        
               post_expr[post_i++] = put_token(token2);
               post_expr[post_i++] = ' ';
            }
            rmstack(&top);
        }
        else
        {
            // symbol 의 isp가 token의 icp보다 크거나 작으면 symbol을 제거하고 출력한다.
            while(isp[stack[top]] >= icp[token])
            {
                token2 = rmstack(&top);
                print_token(token2);
                post_expr[post_i++] = put_token(token2);
                post_expr[post_i++] = ' ';
            }
            add(&top, token);
        }
    }

    while((token = rmstack(&top)) != eos)
    {
        print_token(token);
        post_expr[post_i++] = put_token(token);
        post_expr[post_i++] = ' ';
    }

    post_expr[--post_i] = '\0';
    printf("\n");
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

int rmstack(int* top)
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

void add2(int* top, double token) //add함수 중복 ; 이름 바꿔주면 됨
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