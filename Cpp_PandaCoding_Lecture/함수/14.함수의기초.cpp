#include <iostream>

using namespace std;

// 함수란?
// 하나의 특별한 목적의 작업을 수행하기 위해 독립적으로 설계된 코드의 집합
// 호출한 함수에게 값을 되돌려주는 return value가 있는 함수와 없는 함수로 구분

// 함수는 return 구문이 수행된 후 종료됨.
// 여러개의 return이 있다면 처음 접하는 return 구문을 수행한 후 함수 종료
int main()
{
    /* [ 함수 사용 전 필요한 3가지 ]
    1. 함수 정의 제공
    2. 함수 원형 제공
    3. 함수 호출
    */
   /* 함수의 형태
   1. 리턴값이 있는 타입(리턴값은 통상적으로 함수의 끝을 의미)
    ex) 함수명 선언 이전에 리턴하는 함수의 데이터 타입이 무엇인지 정의해줘야 함.
        typeName functionName(parameterList)
        {
            statement(s);
            return value;
        }
    typeName과 value의 type은 동일해야 함.

   2. 리턴값이 없는 타입(행동을 수행하는 방식으로 구성)
    ex) 함수명 선언 이전에 함수의 타입에 void가 명시됨.
        void funtionName(parameterList)
        {
            statement(s);
            return; // 생략 가능
        }
   */
  // * parameterList : 함수에 사용될 기호에 필요한 정보를 넘겨주는 방식
    return 0;
}