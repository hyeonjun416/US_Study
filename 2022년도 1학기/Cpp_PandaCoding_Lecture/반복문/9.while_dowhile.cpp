#include <iostream>

using namespace std;

int main()
{
    // while문, do while문
    int i = 0;
    /*while(i<3){
        // code
        // code 안에 i와 관련된 증감연산자 필요. 그래야 반복이 종료됨.
        i++;
    }*/
    // 관계 연산자는 true 혹은 false로 반환됨.
    // bool형 데이터는 값을 True/False 두가지 값만을 가질 수 있음
    // 0 = false. 0 이외의 값 = true
    // while문은 for문과 다르게, bool형 데이터 하나만으로 소괄호 내부를 정의할 수 있음.
    // 대신, loop 몸체를 돌면서 bool형 데이터의 값을 변환해줄만한 요소가 등장해야함.(대표적으로 증감)
    //Ex1)
    string str = "Panda"; // ""는 암시적으로 \0(개행문자)을 포함하고 있음
    while (str[i] != '\0'){
        cout << str[i] << endl;
        i++;
    } // while은 조건이 참인 구간동안 계속 반복
    bool a = true;
    bool b = false;
    while (a) {
        cout << "hello\n";
    } // 무한 실행
    while (b){
        cout << "hello\n";
    } // 반복 0회
    int j = 0;
    do {
        cout << "while문 입니다\n";
        j++;
    } while (j<3);

    return 0;
}
/* for문과 while문의 차이
1. while문은 관계식 없이 bool형 데이터만으로 조건을 구성할 수 있다.
2. while은 counter 값을 반복문 내부에서 초기화할 수 없다.
 => 그래서 무조건적으로 while문에서 사용할 counter는 while보다 선행되어 선언되어야 한다.

*/
/* while문과 do-while문의 차이
1. do-while은 반복을 실행하고 조건을 검사 => 먼저 반복을 실행하기 때문에 조건이 false라도 한 번은 실행됨.
2. while문은 조건을 검사하고 반복을 실행
*/