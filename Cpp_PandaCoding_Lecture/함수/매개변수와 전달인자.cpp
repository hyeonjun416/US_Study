#include <iostream>

using namespace std;

// 제작할 함수는 사용자로 부터 값을 입력받아, 입력 받은 만큼 Hello C++ 출력

void helloCPP(int,int); // int, int 는 parameter
// 함수는 하나 이상의 매개변수(parameter)를 가질 수 있음.
// , 로 분류
// 원형 제공 시 변수 이름 생략 가능. 필수적으로 데이터형은 작성
int main()
{
    int times,times2;
    cout << "Write integer : " << endl;
    cin >> times; // int n 에 대응
    cout << "Write one more : " << endl;
    cin >> times2; // int m 에 대응
    helloCPP(times, times2); //times와 times2는 arguments.
    return 0;
}

void helloCPP(int n, int m)// 어떤 결과를 반환하는 것이 아니라 반복하는 함수를 만들 것이기 때문에 void 작성
{
    for(int i=0; i<n; i++)
        cout << "Hello, C++\n";

    for (int i =0; i< m; i++)
        cout << "Plus!!\n";
}
// 함수 디자인의 장점
// 사용자의 필요에 따라 전달되는 값을 달리함으로써
// 필요한만큼 동작 반복 가능

/* 매개변수와 전달인자
매개변수 : 함수의 특성을 나타내는 것(위의 예에서는 int, int)
전달인자 : 코드 중 함수에 실제로 전달되는 값
*/

// arument와 parameter의 이름은 일치하지 않아도 됨. 그러나 데이터 형은 동일해야 함.
