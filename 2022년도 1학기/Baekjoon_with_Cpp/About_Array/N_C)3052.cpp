#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int>s;
    int num[10];
    for(int i = 0; i < 10; i++){
        cin >> num[i];
        s.insert(num[i]%42);
    }
    cout << s.size();


    return 0;
}