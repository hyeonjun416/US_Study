#include <iostream>

using namespace std;

int main()
{
    int num[10];
    int count_dif = 0;
    for(int i = 0; i<10; i++){
        cin >> num[i];
        num[i] %= 42;
    }
    for(int i = 0; i<10; i++){
        for(int j = i; j<10; j++){
            if(num[i] != num[j])
        }
    }
    return 0;
}