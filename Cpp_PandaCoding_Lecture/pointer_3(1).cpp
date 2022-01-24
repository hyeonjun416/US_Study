#include <iostream>
#include <cstring> // strlen 사용 위함

// compile 시간에 배열의 크기를 지정하는 것보다 실행 시간동안 배열의 크기를 지정하는 것이 메모리 상에서 유리.

#define SIZE 20 // SIZE=20 이라는 상수 설정
// 위의 형식은 C에서 상수를 지정하는 형태
// C++ 형식은 const int SIZE = 20 으로 작성.
int main(){
    using namespace std;

    char animal[SIZE]; // 상수를 통해 배열의 크기가 20으로 지정
    char* ps; // 이 곳에 animal의 값을 복사하려고 함.

    cout << "Input Animal's name\n";
    cin >> animal;

    // strlen(변수) : 변수의 크기를 반환
    // strcpy(변수1, 변수2) : 변수2의 내용을 변수1에 복사
    ps = new char[strlen(animal)+1]; // char형 배열을 저장할 수 있는 메모리가 필요하다고 알림(new)
    // ps에 사용자가 몇 글자를 입력하든, 한 칸 더 넉넉한 공간을 지정
    strcpy(ps, animal);
    // 복사
    // 실행시켜보면, 복사된 값의 주소가 원본 주소와 다름을 확인 가능

    cout << "Animal's name that you input is copied" << endl;
    cout << "Animal's name that you input is " << animal << "and, the address is " << (int*)animal <<endl;
    cout << "Copied Animal's name is " << ps << "and the address is " << (int*)ps << endl;
    
    // 메모리적 차원에서 유리함을 구조체에서 사용할 수 있음.
    // 구조체를 new를 사용하여 "동적 구조체"를 생성할 수 있음.
    // pointer_3(2)에서 설명
    
    return 0;
}