#include <iostream>

using namespace std;

int main(){
    // 중첩 루프 : 2차원 배열에서 매우 많이 사용
    int temp[4][5] = 
    {
        {1,2,3,4,5},
        {11,22,33,44,55},
        {111,222,333,444,555},
        {1111,2222,3333,4444,5555}
    };
    // temp는 4개의 원소를 가지고, 4개의 원소는 각 5개의 원소를 가진다.
    for (int row=0; row<4; row++){
        for(int col=0; col<5; col++){
            cout << temp[row][col] << " ";
        }
        cout << "\n";
    }
    return 0;
}