#include <iostream>

using namespace std;
// int main 전까지 1
struct MyStruct{
    string name;
    int age;
};
// MyStruct 라는 구조체를 만들고, name과 age라는 멤버 변수를 넣음

void display(MyStruct&);
// display라는 함수의 원형 선언

// void display 전까지 2
int main(){
    MyStruct Defi ={
        "Defi",
        23,
    };// main 함수안에 Defi라는 구조체를 초기화

    display(Defi); //display 함수의 변수로 Defi라는 구조체를 받음
    return 0;
}

// 3
void display(MyStruct& temp) {
    cout << "Name : " << temp.name << endl;
    cout << "Age : " << temp.age << endl;
} // display라는 함수는 MyStruct이라는 구조체를 변수로 받고, 구조체의 멤버 변수를 출력하는 기능을 담당

// 분할 컴파일 : C와 마찬가지로 프로그램을 구성하는 함수들을 별개의 파일에 넣는 것을 권장.
// 파일들을 개별적으로 분할하여서 컴파일 한 후, 하나의 최종 실행 프로그램으로 링크할 수 있는 것.
// 이러한 기능을 효율적으로 제어하기 위해, C와 C++에서는 전처리 지시자 include 기능을 제공하는 것.

// 분할 컴파일 = 1, 2, 3을 나누어서 컴파일하는 방법
// 1은 헤더파일로 분류
/* < 헤더파일로 분류 >
1. 함수 원형
2. #define이나 const를 사용하는 기호 상수
3. 구조체 선언
4. 클래스 선언
5. 템플릿 선언
6. 인라인 함수
*/