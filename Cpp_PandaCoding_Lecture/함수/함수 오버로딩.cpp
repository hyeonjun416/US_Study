#include <iostream>

using namespace std;

void print(char, int);
void print(int, int);
void print(char);
// 사용자가 print라는 함수 사용 시, 매개변수를 읽고 그에 맞는 print로 매칭
int main()
{
    // 함수의 다형
    // 다형 : 함수가 다양한 형태를 지님을 뜻함
    // 함수의 오버로딩 : 여러 개의 함수를 같은 이름으로 연결한다.
    // 매개변수의 리스트(signiture)
    print('a', 3); // 1번
    print(3,2); // 2번
    print('a'); // 3번

}
// 함수 오버로딩은 기본적으로 서로 다른 데이터형을 대상으로하지만, 같은 작업을 하는 경우에 사용하는 것이 바람직함.
// default 매개변수를 사용해 그 함수가 처리하는 목적에 부합하게 설계하는 것 역시 중요

/* 오버로딩 사용 불가한 경우
1. 함수의 리턴형만 다를 경우 => 즉, parameter(매개변수)가 중요
2. 함수를 사용할 때, 두 개 이상의 함수에 대응되는 경우
*/