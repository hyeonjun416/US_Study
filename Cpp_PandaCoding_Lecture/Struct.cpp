#include <iostream>

using namespace std;
// C++은 사용자의 정의대로 데이터형을 만들 수 있다는 장점이 있는데,
// 이 장점이 가장 잘 들어나는 부분이 구조체임
int main() {
    // 구조체 : 다른 데이터형이 "허용"되는 데이터의 집합 
    // cf) 배열 : "같은" 데이터형의 집합

    // 예) 축구선수
    /* string name;
    string position;
    float height;
    float weight;
    */
    // 위 선언 데이터 모드 한 축구선수에 대한 내용
    // 하나의 집합으로 관리할 수 있다면 데이터 관리에 도움이 됨.
    // 하지만 데이터형이 다르기때문에 배열로 해결 불가능.
    // 이럴 때 구조체를 사용 가능
    struct StructName
    {
        string name;
        string position;
        int height;
        int weight;
        // 위 데이터들을 "멤버" 라고 함.
    } C; // 이렇게 구조체를 정의하는 부분에서 }뒤에 사용할 변수명(C)를 입력하게되면,
    // 이후 새롭게 선언하지 않아도, 입력한 변수명으로서 구조체가 자동으로 만들어짐.
   
    // 구조체가 사용자의 입맛대로 데이터형을 만든다고 했는데,
    // 즉, StructName 이라는 변수가 생성된 것이다.
    StructName A; // A라는 이름의 StructName형 변수를 선언한 것
    // 이때, A는 지정해주면 "멤버"들의 데이터를 포함한다.
    // . 을 이용하면 StructName의 멤버에 접근할 수 있다
    A.name = "Son";
    A.position = "Striker";
    A.height = 183;
    A.weight = 77;
    // 위의 방식도 가능. 하지만 선언과 동시에 대입하는 초기화도 가능
    StructName B = {
        "Park",
        "Mid Fielder",
        180,
        77
    };

    C = {

    }; // 이처럼 공백을하게되면, 빈공간은 0으로 초기화 된다.(배열과의 차이)
    cout << A.name << endl;
    cout << A.position << endl;
    cout << A.height << endl;
    cout << A.weight << endl;

    cout << B.name << endl;
    cout << B.position << endl;
    cout << B.height << endl;
    cout << B.weight << endl;

    // 구조체도 배열로 선언 가능
    StructName D[2] = {
        {"A", "A", 1, 1}, // 0번 인덱스
        {"B", "B", 2, 2} // 1번 인덱스
    };
    // 구조체 배열 멤버에 접근하는 방법
    cout << D[0].height << endl; // 1이 출력됨
    return 0;
}