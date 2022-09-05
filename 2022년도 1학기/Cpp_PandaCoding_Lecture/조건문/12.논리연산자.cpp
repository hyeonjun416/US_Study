#include <iostream>

using namespace std;

int main(){
    // 논리표현식 : 하나 이상의 조건을 검색할 때 사용
    // 논리합, 논리곱, 논리부정 연산자를 제공하는 cpp

    // 논리합(or) || : 둘 중 하나만 참이면 True
    /*
    좌항 || 우항
    1. 5 == 5 || 5 == 9 : True
    2. 5 > 3 || 5 > 10 : True
    3. 5 > 8 || 5 < 10 : True
    4. 5 > 9 || 5 < 2 : False
    */

    // 논리곱(and) && : 둘다 참이면 True
    /*
    1. 5 == 5 && 9 == 9 : True
    2. 5 == 5 && 9 != 9 : False
    3. 10 < 2 && 10 > 2 : False
    */

    // 논리부정 !
    // !(표현식) : 만약 표현식이 True 라면 False로 반환(False라면 True)
    cout << "How old?";
    int age;
    cin >> age;
    if (age < 0 || age > 100) cout << "Don't tell a lie\n";
    else if (20<=age && age <= 29) cout << "You are twenties!\n";
    else cout << "I don't know your age\n";

    return 0;
}