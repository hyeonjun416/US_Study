#include <iostream>

using namespace std;
const int SIZE = 30;
int main(){
    // 조건이 여러개 일 때 사용하기 편리한 것이 switch
    /* switch 구문 형태
    switch (integer-expression)
    {
        case label1 :
            code1
        case label2 :
            code2 
        ...
    }
    */

    // switch 구문은 하나의 정수값이 될 수 있는 표현식이 조건으로 들어갈 수 있음
    int a;
    cin >> a;
    switch (a)
    {
        case 1 : 
            cout << "Num 1\n";
            break; // break를 작성하지 않으면 이 case 아래 부분도 다 실행됨.
        case 2 : 
            cout << "Num 2\n";
            break;
        case 3 : 
            cout << "Num 3\n";
            break;
        default :
            cout << "The num is not 1,2,3\n";
            break;
    }
    cout << "switch is finished\n";
    // case 이외의 경우는 switch 구문 자체가 생략(default 미사용 시)
    //default = else와 유사.
    // switch 문은 정수값을 기준으로 판단하기 때문에, float형, char형 등의 다른 조건을 검사할 수 있음.
    // 일반적으로 선택할 수 있는 경우의 수가 3개 이상인 경우 if-else 보다 switch 구문이 효율적임.(실행 속도 등)
    // break : 프로그램이 코드의 일부분을 무시하고 건너뛰게 할 수 있음.
    // 그래서 모든 종류의 loop에서 사용 가능

    //ex1) break 사용 예시
    int i =0;
    while (true) // break 미사용 시 무한루프
    {
        cout << "The i is " << i << endl;
        if (i>10) break;
        i++;
    }
    cout << "while is finished\n";
    // 반복문에서만 사용 가능한 continue!!
    // continue : continue 만났을 때 그 이후의 모든 내용을 생략하고 반복문 반복.

    //Ex2) continue 사용 예시
    cout << "Write sentence\n";
    char line[SIZE];
    cin.get(line, SIZE);
    cout << "Your sentence\n";
    int spaces = 0;
    for (int j=0; line[j] != '\0'; j++)
    {
        cout << line[j];

        if (line[j] != ' ')
            continue;
        
        spaces++;
    }
    cout << "The count execpt space in your sentece is " << spaces << endl;
    
    return 0;
}