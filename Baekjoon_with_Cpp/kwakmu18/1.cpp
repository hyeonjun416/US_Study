#include <iostream>
#include <string>
using namespace std;

int main(void) {
    cout << "1\n";
    cout << "Hello World!";

    cout << "\n2\n";
    cout << "강한친구 대한육군\n강한친구 대한육군";

    cout << "\n3\n";
    cout << "\\    /\\\n )  ( ')\n(  /  )\n \\(__)|";

    cout << "\n4\n";
    cout << "|\\_/|\n|q p|   /}\n( 0 )\"\"\"\\\n|\"^\"`    |\n||_/=\\\\__|";

    cout << "\n5\n";
    int a,b;
    cin >> a >> b;
    cout << a+b;

    cout << "\n6\n";
    cin >> a >> b;
    cout << a-b;

    cout << "\n7\n";
    cin >> a >> b;
    cout << a*b;

    cout << "\n8\n";
    double c,d;
    cin >> c >> d;
    cout.precision(10);
    cout << c/d;

    cout << "\n9\n";
    cin >> a >> b;
    cout << a+b << endl << a-b << endl << a*b << endl << a/b << endl << a%b;

    cout << "\10\n";
    int e;
    cin >> a >> b >> e;
    cout << (a+b)%e << endl << ((a%e)+(b%e))%e << endl << (a*b)%e << endl << ((a%e)*(b%e))%e;

    cout << "\n11\n";
    int num1;
    string num2;
    cin >> num1 >> num2;
    for(int i=2;i>=0;i--) cout << num1*(num2[i]-48) << endl;
    cout << num1*stoi(num2);
}