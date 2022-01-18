#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a;
    cin >> b;
    int a3, a4, a5, a6;
    a3 = a * (b%10);
    a4 = a * (b%100 - b%10)/10;
    a5 = a * (b/100);
    a6 = a3 + a4*10 + a5*100;

    cout << a3 << "\n" << a4 << "\n" << a5 << endl;
    cout << a6 << endl;

    return 0;
}