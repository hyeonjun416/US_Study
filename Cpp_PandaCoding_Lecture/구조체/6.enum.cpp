#include <iostream>

using namespace std;

int main(){
    // 열거체(enum)
    // 기호 상수를 만드는 것에 대한 또다른 방법.

    enum spectrum { red, orange, yello, green, blue, violet, indigo, ultraviolet };
    /* 열거체는 enum이라는 데이터형의 이름으로 선언되며, 2가지 역할을 수행
    1. spectrum을 새로운 데이터형 이름으로 만듦.
    2. spectrum에서 정의된 것(red, ...)을 0에서부터 7까지 정수 값을 각각 나타내는 기호 상수로 만듦.
    == 즉 red=0, orange=1, yellow=2 ... ultraviolet=7 이 되는 것
    */
    spectrum a = orange; // a에는 열거자(red,...)들의 값만을 대입할 수 있음
    cout << a << endl; // 1 출력
    // 추가적으로, 열거자들을 기호 상수로서 관리하므로, 산술연산을 적용할 수 없다.
    // ex) spectrum a = orange + yellow; 는 3이 아닌 에러가 뜬다.

    int b;
    b=blue; // b=3
    b=blue+3; // b=7

    /* <정리>
    1. 열거체를 새로 선언할 때는 열거자들만 대입가능
    2. 열거자들 간에 산술연산은 불가능
    3. int형 변수에 값을 대입하고자 할 때는, 열거자들의 값은 int형 정수로 계산되어 대입됨.
    */
   // 열거자는 기본적으로 아무 옵션을 지정하지 않으면 0부터 시작.
   // 대입연산자(=)를 이용해서 각각의 열거자에게 값을 대입할 수 있음
   // 대신 열거자를 초기화하는 값은 "정수"여야만 한다.
   // 초기화 하지않은 열거자들은, 이전 열거자의 값에 +1 인 값을 갖는다
    return 0;
}