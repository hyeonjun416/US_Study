// 별찍기 2
#include <iostream>

using namespace std;

int main()
{
    int count;
    cin >> count;
    int line = 0;
    for(int i = count; i>0; i--){
        line++;
        for(int j = i; j>1; j--) cout << " ";
        for(int k = 0; k<line; k++) cout << "*";
        cout << endl;
    }
    return 0;
}