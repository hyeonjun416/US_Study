//오븐 시계
#include <iostream>

using namespace std;

int main()
{
    int h,m,c;
    cin >> h >> m;
    cin >> c;
    int ch, cm, sh, sm;
    ch = c/60;
    cm = c%60;
    sh = h + ch;
    sm = m + cm;
    if(sm>60){
        sh = sh + sm/60;
        sm = 1;
        if(sh>23){
            h = sh%24;
            cout << sh;
        }
        else cout << endl;
    }
    return 0;
}