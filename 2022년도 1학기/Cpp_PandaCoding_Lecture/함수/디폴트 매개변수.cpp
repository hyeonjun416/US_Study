#include <iostream>

using namespace std;

int sumArr(int*, int n = 1);
// 위에서 int n = 1 부분이 default 매개변수 사용 예시
// 만약 main()에서 sumArr를 사용할 때, int n = 1 자리에 따로 매개변수를 지정하지 않는다면,
// 1이라는 값이 대입됨.
// default 매개변수는 우측에서 좌측 순으로.
// 위의 예에서 int n 을 default 매개변수를 지정하지 않았는데, int* 에 default 매개변수를 지정할 수는 없다.
int main()
{
    // 디폴트 매개변수 : 함수 호출 시 매개변수를 생략했을 때 사용되는 기본값인 변수
    // 함수의 원형을 정의하는 곳에서 사용 가능
}