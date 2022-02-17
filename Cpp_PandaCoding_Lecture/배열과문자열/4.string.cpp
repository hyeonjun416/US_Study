#include <iostream>

using namespace std;

int main(){
    // C++에서 문자열을 다루는 방법 중 하나인 string
    /*
    1. C스타일로 string 객체를 초기화할 수 있다.
    2. cin을 사용하여 string 객체에 키보드 입력을 저장할 수 있다.
    3. cout을 사용하여 string 객체를 디스플레이할 수 있다.
    4. 배열 표기를 사용하여 string 객체에 저장되어 있는 개별적인 문자들에 접근할 수 있다. 
    */ // == string 과 문자열은 동등한 방식으로 사용가능.
    // string의 특 장점!!
    // string에서는 배열을 다른 배열에 통째로 대입하는 것이 가능하다.
    // char형 배열과 다르게 배열사이즈를 지정하지 않아도 된다.
    char char1[20];
    char char2[20] = "jaguar";
    string str1;
    string str2 = "panda";
    //char1 = char2; // 불가능
    str1=str2; // 가능
    cout << str1 << endl;
    cout << str1[0] << endl; // p가 출력됨을 알 수 있음

    return 0;
}