// A+B
#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    do{
        cin >> num1 >> num2;
        if(num1!=0 && num2!=0) cout << num1+num2 << endl;
    }while(num1!=0 && num2 != 0);
    return 0;
}