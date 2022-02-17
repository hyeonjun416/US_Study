#include <iostream>

using namespace std;

int main(){
    
    double* p3 = new double[3]; // double형 데이터 3개를 저장할 수 있는 공간을 대입
    p3[0] = 0.2;    // p3를 배열의 이름처럼 취급
    p3[1] = 0.5;
    p3[2] = 0.8;

    cout << "p3[1] is " << p3[1] << endl; //0.5
    
    p3 = p3 + 1; // 포인터를 증가
    // 위에서 1 은 "double 형 데이터 공간 한개를 의미"
    // 포인터는 포인터 변수에 1을 더하게 되면 값이 그 포인터가 지시하는 데이터형의 바이트 수 만큼 증가하게됨.
    // 위의 경우 double 형이므로, double의 바이트만큼 그 값이 증가
    // 그래서 각각 0과 1의 주소의 double형 바이트만큼 주소가 증가해서 다음 주소가 가지고 있던 값이 출력되는 것
    cout << "Now p3[0] is " << p3[0] << " and "; //0.5
    cout << "p3[1] is " << p3[1] << endl; // 0.8

    p3 = p3 - 1; // 다시 시작위치를 지시
    delete[] p3; // 배열 메모리를 해제
    //cin.get();
    return 0;
}