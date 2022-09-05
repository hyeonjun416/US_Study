// 인수 = 시간 분 소요시간
// 조건 = ~~
// 추가 ~~
//오븐 시계
#include <iostream>

using namespace std;

int main()
{
    int h,m,a;
    cin >> h >> m;
    cin >> a;
    int ah, am;
    int count = 0;
    am = m + a;
    if(am>=60){
        while(am>=60){
            m = am-60;
            am = am-60;
            count++;
        }
        ah = h+count;
        if(ah>23){
            h = ah-24;
        }
        else h=h+count;
    }
    else{
        m = m+a;
    }
    cout << h << " " << m;
    return 0;
}