#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    cout.precision(10); // precision(10) 은 소숫점 아래 9째자리까지 출력
    // = 가장 큰 자리 수부터 10자리를 출력
    // 그런데 첫번째 자리수가 0이므로, 소숫점 아래 9번째 자리까지 출력됨.
    // 절대오차 : 어떤 물체를 측정한 값이 실제값과 얼마나 차이가 나는지
    // 상대오차 : 측정한 물체의 실제 크기와 절대오차의 비율
    // 문제에서 절대오차 또는 상대오차가 pow(10,-9) 이하이면 정답이라고 하였음.
    // 즉, 오차는 0.000000001 까지가 한도이다.
    // 그러면, 결과값을 9번째자리까지 출력하면 pow(10,-9)의 오차도 나지 않는다.
    cout << (double)a/(double)b;
    /* float과 double의 차이
    https://hashcode.co.kr/questions/553/float%EA%B3%BC-double%EC%9D%98-%EC%B0%A8%EC%9D%B4
    간단히 말하면, 표현할 수 있는 실수가 얼마나 정밀한가
    https://beso.tistory.com/12

    */
    return 0;
}
// https://m.blog.naver.com/power2845/50150861203
// 1바이트 = 8 비트
// 비트는 0과 1 두가지 , 1바이트 = 2^8
// 4바이트 = 32비트 = 2^32