//알람 시계
#include <iostream>

using namespace std;

int main()
{
    int h,m;
    cin >> h >> m;
    if(m>=45) cout << h << " " << m-45;
    else // m < 45
    {
        if(h!=0){
            m = h*60 + m;
            m = m - 45;
            h = m/60;
            m = m%60;
        }
        else{
            m = 23*60 + m + 15;
            h = m/60;
            m = m%60;
        }
        cout << h << " " << m;
    }
    return 0;
}