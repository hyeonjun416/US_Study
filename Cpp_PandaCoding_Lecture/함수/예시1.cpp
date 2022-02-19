#include <iostream>

using namespace std;

const float PIE = 3.14;
// 함수의 원형 미리 선언 : 변수와 같은 원리. main함수 전에 선언되어야 함.
void cheers(int n);
float circle(float x);
// 함수의 원형 : 함수의 데이터형, 이름, parameter 단위까지를 말함. 
int main()
{
    int a;
    cout << "Write one number : " << endl;
    cin >> a;
    cheers(a);

    int b;
    cout << "Write circle's radius : " << endl;
    cin >> b;
    float c = circle(b);
    cout << "The circle's area is " << c << endl;
}

void cheers(int n) {
    for (int i = 0; i < n; i++) {
        cout << "Cheers!" << endl;
    }
} // void => return 값이 없는 함수


float circle(float x) {
    return x * x * PIE;
} // C++ 에서는 float 데이터형에 정수를 담게되면 정수로 자동으로 형변환
