#include <iostream>

using namespace std;

int main(){
    // 원의 넓이를 구하는 프로그램
    // = 반지름 * 반지름 * 파이
    int r = 3; // 반지름 지정
    float s = r * r * 3.14;

    // 1. 바뀔 필요가 없는 수
    // 2. 바뀌어서는 안되는 수
    // 위와 같은 수를 "상수" 라는 개념으로 관리 가능
    // C 에서는 #define 변수명 이용.
    // 예) #define PIE 3.141592
    // C++ 에서는 const라는 제한자를 이용해 사용가능
    const float PIE = 3.141592; // float 등의 변수형까지 선언한다는 점이 C와의 차이점
    // const 사용 시 주의!
    // 1. 반드시 처음 선언할 때 값을 대입(초기화) 해야함
    // 2. 변수와 달리, 선언 후 값을 수정할 수 없다.
    cout << s << endl;   
    return 0;
}
