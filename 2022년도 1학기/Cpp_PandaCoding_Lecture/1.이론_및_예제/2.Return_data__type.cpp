#include <iostream>

using namespace std;

int main() {
    // 데이터형 변환 : C++는 데이터형이 풍부 -> 사용자의 선택폭이 넓음
    // 이로인해, 컴퓨터의 처리가 복잡해질 수 있음.
    // 그래서, 아래와 같은 상황에서 자동으로 데이터형을 바꿔주는 일을 함. ( = 데이터형 변환)
    /*
    1. 특정 데이터형의 변수에 다른 데이터형의 값을 대입했을 때
    2. 수식에 데이터형을 혼합하여 사용했을 때
    3. 함수에 매개변수를 전달할 때
    */

   int a = 3.141592;
   cout << a << endl; // 결과 = 3
   // 특정 데이터형(int) 변수(a)에 다른 데이터형의 값(3.141592=float)을 대입
   
   // 강제적으로 데이터형 변환
   // typeName(a) | (typeName)a
   char ch='M';
   cout << (int)ch << " " << int(ch) << endl;

   //C++에서는 좀 더 제한적인 데이터형 변환 연산자가 등장
   // static_cast<typeName> - 이후 프렌드를 배울 때 자세히 공부
   cout << static_cast<int>(ch)<< " " << static_cast<int>(ch) << endl;
    return 0;
}