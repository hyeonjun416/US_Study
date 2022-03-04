// 주사위
// 인수 : 주사위 눈 3개(d1,d2,d3), 상금, 동일한 눈, 눈의 최댓값
/* 조건
1. 3개 동일 -> 만 + 눈*1000
2. 2개 동일 -> 천 + 눈*100
3. 다름 -> 가장 큰 눈 * 100
*/

// 추가 : 동일한 눈 개수, dice배열

#include <iostream>

using namespace std;

int main()
{
    int dice[3];
    for(int i = 0; i<3; i++) cin >> dice[i];
    int max=0;
    int count = 1;
    int same_dice[1];
    for(int i = 1; i<3; i++){ 
        if(dice[0]==dice[i]){ // dice[0] 과 동일한 눈이 있는 경우
            count++;
            same_dice[0] = dice[0];
        }
    }
    if(count==1){ // dice[0] 과 동일한 눈이 없는 경우
        if(dice[1]==dice[2]){
            count++;
            same_dice[0] = dice[1];
        }
    }
    for(int i =0; i<3; i++){
        if(max<dice[i]) max=dice[i];
    }
    if(count==1) cout << max*100;
    else if(count==2) cout << same_dice[0]*100 + 1000;
    else if(count==3) cout << same_dice[0]*1000 + 10000;
    return 0;
}