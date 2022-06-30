#include <iostream>

using namespace std;

int d(int num){
    int sum = num;

    while(num != 0){
        sum = sum + (num % 10); // 첫째 자리
        num = num/10; // 10을 나누어 첫째 자리 삭제
    }
    return sum;
}

int main()
{
    bool check[10001]{ false };

    for(int i = 1; i<10001; i++){
        int  n = d(i);
        if(n < 10001) {
            check[n] = true;
        }
    }
    for( int i = 1; i < 10001; i++){
        if(!check[i]){
            cout << i << endl;
        }
    }
    return 0;
}