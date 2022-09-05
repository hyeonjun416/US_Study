#include <iostream>

using namespace std;

int sum(int, int);
float sum(float, float);

int main()
{
    cout << "Put in two integers : ";
    int a, b;
    cin >> a >> b;
    cout << "The sum of integers : " << sum(a,b) << endl;
    cout << "Put in two float : ";
    float c, d;
    cin >> c >> d;
    cout << "The sum of floats : " << sum(c,d) << endl;

    return 0;
}

int sum(int a, int b){
    return a+b;
}

float sum(float a, float b){
    return a+b;
}