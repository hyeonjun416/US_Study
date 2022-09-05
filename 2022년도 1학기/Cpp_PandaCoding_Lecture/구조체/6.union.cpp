#include <iostream>

using namespace std;

int main(){
    // 공용체(union)
    // 서로 다른 데이터형을 한 번에 한 가지만 보관할 수 있음
    union MyUnion
    {
        int intVal;
        long longVal;
        float floatVal;
    };

    MyUnion test;
    test.intVal = 3;
    cout << test.intVal << endl; // 3
    test.longVal = 33;
    cout << test.intVal << endl; //33
    cout << test.longVal << endl; //33
    test.floatVal = 3.3;
    cout << test.intVal << endl; // 이상한 값
    cout << test.longVal << endl; // 이상한 값
    cout << test.floatVal << endl; // 3.3
    // 위와 같은 이유가 발생하는 이유가 Union과 Struct의 차이
    // Union은 한번에 하나의 데이터만 보관할 수 있음
    // 위 예시를 통해 설명하자면, int형을 선언하면 Union에는 int 가 저장된다.
    // 하지만 이후 long 을 선언함으로써, int는 소실됨.
    // 즉, Union은 여러가지 데이터형을 보관할 수 있지만, 이들을 동시에 사용할 수는 없다.
    // 메모리를 절약할 수 있다는 장점이 있다.(그래서, 일반적인 곳이 아닌 운영체제, 하드웨어, 데이터구조에서 많이 사용)
    
    return 0;
}