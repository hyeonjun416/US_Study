// 숫자의 개수
#include <iostream>

using namespace std;

int main(){
    int numa, numb, numc;
    cin >> numa >> numb >> numc;
    int multiply = numa * numb * numc;
    int compare[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int result[100];
    int digits = 0;
    while(multiply>0){
        result[digits] = multiply%10;
        multiply /= 10;
        digits++;
    }
    for(int i = 0; i < 10; i++){
        int count = 0;
        for(int j = 0; j<digits; j++){
            if(compare[i]==result[j]) count++;
        }
        compare[i] = count;
    }
    
    for(int i = 0; i< 10; i++){
        cout << compare[i] << endl;
    }
    return 0;
}