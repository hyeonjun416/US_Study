#include <iostream>

struct MyStruct
{
    char name[20];
    int age;
};

int main(){
    using namespace std;
    
    //동적 구조체 생성
    // 구조체의 이름을 temp라고 가정
    // temp* ps(변수) = new temp; => 이와 같은 형태로 동적 구조체를 선언 가능
    // 구조체는 멤버 연산자'.'를 통해 멤버에 접근할 수 있었음.
    // 그에 반해 동적 구조체는 '->' 를 통해 접근 가능

    MyStruct* temp = new MyStruct; // new를 통해 구조체를 동적 구조체로 선언

    cout << "Tell me your name : " << endl;
    cin >> temp->name; // 화살표를 통해 멤버에 접근

    cout << "Tell me your age : " << endl;
    cin >> (*temp).age; //(*구조체변수명).멤버 형식으로 '.'멤버 연산자 사용도 가능

    cout << "Hi! Your name is" << temp->name << endl;
    cout << "And your age is " << temp->age << endl;
    return 0;
}