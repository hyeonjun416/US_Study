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
    cout << "Now p3[0] is " << p3[0] << " and "; //0.5
    cout << "p3[1] is " << p3[1] << endl; // 0.8

    p3 = p3 - 1; // 다시 시작위치를 지시
    delete[] p3; // 배열 메모리를 해제
    //cin.get();
    return 0;
}