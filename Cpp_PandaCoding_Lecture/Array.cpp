#include <iostream>

using namespace std;

int main(){
    /*
    C++은 복합데이터형을 제공한다.
    >> 사용자 정의대로 새로운 데이터 형을 만들 수 있다.
    복합데이터형 : 기본 정수형과 부동소수점형의 조합
    */
   // char형 역시 근본적으로는 정수로 저장됨.(ASCII)
   // 오늘 배울 복합데이터형은 배열(array)
   /*
   Array : 같은 데이터형의 집합
   typeName arrayName[arraySize];
   */
  short month[12]; // 배열 선언

  // short(데이터형), month(이름), 12(size)을 가진 배열이 됨.
  // 어떤 데이터형이 원소가 될 수 있는가는 데이터형에 따름.(위 예시에서는 short형)
  // 몇 개의 구성요소를 넣을 수 있냐는 배열의 사이즈에 따름.(위 예시에서는 12개 가능)

  /* 배열의 원소(구성요소) 정의하기
  1. 선언과 동시에 대입하기(초기화)
  2. 나중에 대입하는 방식
  */
 short first[12] = { 1, 2, 3}; // 초기화 방식
 // {} 안에 원소 작성. 남은 공간은 사용하지 않은채로 남겨진 상태임.
 // {} 안에 있는 원소는 인덱스 0 부터 시작임.(위 예시에서 1은 0번 인덱스 / First[0]=1)

cout << first[3] << endl; // 0 출력

 /* 배열을 사용할 수 있는 규칙
 1. 배열 원소에 대입할 값들을 콤마로 구분하여 중괄호로 묶어 선언
 2. 초기화를 선언 이후 나중에 할 수는 없다.
 3. 배열을 다른 배열에 통째로 대입할 수 없다.
 4. 초기화 값의 개수를 배열 원소의 개수보다 모자라게 제공할 수 있다.
 5. 배열을 부분적으로 초기화하면, 나머지 원소들은 모두 0으로 설정한다.
 즉, 명시적으로 첫 번째 원소만 0으로 초기화하면, 나머지 원소들은 모두 0으로 초기화 됨.
 6. 배열을 초기화할 때, 대괄호 속을 비워두면 컴파일러가 초기화 값의 개수를 헤아려 배열 원소 개수를 저장한다.
 */


   return 0;
}