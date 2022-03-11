// 숫자의 개수
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int num1,num2,num3;
    cin >> num1 >> num2 >> num3;
    int multiply = num1*num2*num3;
    int digits=0;
    while(multiply != 0){
        multiply=multiply/10;
        digits++;
    }
    multiply = num1*num2*num3;
    int count_dnum[digits];
    int count_num = 0;
    int digits_cp = digits;
    int a = pow(10,digits_cp-1);
    for(int i = 0; i<digits; i++){
        count_dnum[i] = multiply/a;
        multiply = multiply % a;
        digits_cp--;
        cout << multiply << endl;
    }
    int result[10];
    for(int i=0; i<10; i++){
        for(int j = 0; j<digits; j++){
            if(i==count_dnum[j]) count_num++;
        }
        result[i] = count_num;
        count_num = 0;
    }
    // for(int i = 0; i<10; i++){
    //     cout << result[i] << endl;
    //}
    return 0;
}