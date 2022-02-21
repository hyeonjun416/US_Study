#include <iostream>

using namespace std;

void swapA(int&, int&);
void swapB(int*, int*);
void swapC(int, int);

int main()
{
    // 참조(reference)란?
    // 미리 정의된 변수의 실제 이름 대신 사용할 수 있는 대체이름
    // 함수의 매개변수에 사용
    // 함수 매개변수 자리에 구조체를 사용할 경우, 일반적으로 구조체의 원본이 아닌 복사본에 대해 작업을 한다라고 언급함.
    // 참조를 매개변수를 사용하게된다면, 원본의 데이터를 가지고 작업을하게 됨.
    // 그래서 구조체의 volume이 크다면, 함수에서 포인터대신 참조를 사용하는 것이 효율적.
    int a;
    int& b = a; // & = 참조연산자/주소연산자(동일) 여기서는 데이터형의 식별자로서 사용됨.
    
    int wallet1= 100;
    int wallet2=200;

    cout << "First state : " << endl;
    cout << "wallet1 = " << wallet1 << ". wallet2 = " << wallet2 << endl;
    cout << "\n";
    cout << "Use reference\n";
    swapA(wallet1, wallet2);
    cout << "After use swapA\n";
    cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;
    cout << "\n";
    cout << "Use Pointer\n";
    swapB(&wallet1, &wallet2);
    cout << "After use swapB\n";
    cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;
    cout << "\n";
    cout << "Use value\n";
    swapC(wallet1, wallet2);
    cout << "After use swapC\n";
    cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;

    // 값을 이용한 방식은 변화가 없다.
    // 그 이유는 값으로 전달하게되면, 값에 대한 복사본을 가지고 작업을 하기 때문에 작업 이후의 내용을
    // return 해주고 return 값을 main()에서 사용하지 않으면,
    // 원본에 대한 내용이 변하지 않는다.
    return 0;
}
// 참고로 전달하는 방식
void swapA(int& a, int& b){
    int tmp;

    tmp = a;
    a = b;
    b = tmp;
}
// 포인터로 전달하는 방식
void swapB(int* a, int* b){
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}
// 값으로 전달하는 방식
void swapC(int a, int b){
    int tmp;

    tmp = a;
    a = b;
    b = tmp;
}