#include <iostream>

using namespace std;

inline float square(float x ) { return x*x;}

int main()
{
    // 인라인 함수 : 프로그램의 실행 속도를 높이기 위해 보강된 것.
    /*
    일반적으로 함수의 호출은 함수의 주소로 점프하는 과정
    인라인 함수는 컴파일된 함수 코드가 프로그램의 다른 코드에 삽입
    컴파일러의 인라인 함수 호출 = 점프가 아닌 그에 대응하는 함수 코드로 대체
    */
   int a = 5;
   cout << "The line in square is " << a << ", and this square's area?" << endl;
   float b = square(a);
   cout << b << endl;
}