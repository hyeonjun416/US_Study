//빠른 A+B
#include <iostream>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int count;
    int a,b;
    cin >> count;
    for(int i = 0; i < count; i++){
        cin >> a >> b;
        cout << a+b << "\n";
    }
}