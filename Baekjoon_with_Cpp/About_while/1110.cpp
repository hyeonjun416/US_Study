//더하기 사이클

// 10 보다 작은 수 입력 시 앞에 0을 붙여 2자리 -> 각 자리의 숫자를 더함
// 가장 오른쪽 자리 수와 앞에서 구한 합의 가장 오른쪽 자리 수를 붙여 새로운 수

#include <iostream>

using namespace std;

int main(){
    int num, sum, new_num;
    int last_num=0;
    int count=0;
    cin >> num;
    last_num = num;
    while(true){
        count++; 
        sum = num/10 + num%10;
        new_num = (num%10)*10+sum%10;
        num = new_num;
        if(num==last_num) break;
    }
    cout << count;
    return 0;
}
