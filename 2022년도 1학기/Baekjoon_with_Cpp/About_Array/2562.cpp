// 최댓값
#include <iostream>

using namespace std;

int main()
{
    int list[9];
    for(int i = 0; i<9; i++) cin >> list[i];
    int max = 0;
    int index_num = 0;
    for(int i = 0; i<9; i++){
        if(list[i]>max){
            max = list[i];
            index_num = i+1;
        }
    }
    cout << max << "\n" << index_num;
}