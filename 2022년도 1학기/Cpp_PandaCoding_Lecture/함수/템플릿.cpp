#include <iostream>

using namespace std;

template <class Any>
// class 혹은 typeName 사용가능
// 위에서 Any 는 데이터의 일반화. 어떠한 데이터형을 사용할지 정해지지 않음.
Any sum(Any, Any);

int main()
{
    // 함수 템플릿 : 함수의 일반화에 대한 서술임.
    // 함수의 템플릿 : 구체적인 데이터형을 포괄할 수 있는 일반형으로 함수 정의
    // = 어떤 데이터형을 템플릿에 매개변수로 전달하게 된다면, 컴파일러가 그 데이터형에 맞는 함수를 생성한다는 의미
    // 일반화 : 객체지향프로그램의 목표 중 하나
    // 일반화 : 특정한 데이터형에 귀속되지 않고, 일반적이고 범용적으로 사용할 수 있게 하는 것
    // 함수의 템플릿 = 일반화 프로그래밍
    int a = 3;
    int b = 4;
    cout << sum(a,b) << endl; // class Any에서 Any가 int

    // 템플릿2에 이 내용을 추가하면 에러가 발생하는데,
    // 함수 오버로딩 시간에 배운 내용과 겹친다.
    // Any sum(int, Any)와 Any sum(Any, Any) 두가지 경우에 모두 포함되므로 작동 x

    float c = 3.14;
    float d = 1.592;
    cout << sum(c,d) << endl; // class Any에서 Any가 float

    // cout << sum(a,c) << endl; 
    // a. 즉 첫 인수가 int형이기 때문에 Any가 int형으로 지정 => int형을 paramater로 하는 sum으로 정의됨.
    // 그런데, c가 float형이므로 에러가 발생
    // 위를 사용하는 방법은 템플릿2에 작성
    return 0;
}

template <class Any>
Any sum(Any a, Any b)
{
    return a + b;
}