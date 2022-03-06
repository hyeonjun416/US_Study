//A+B
#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    while(cin >> num1){
        cin >> num2;
        cout << num1+num2 << endl;
    }
    return 0;
}
// 입력을 몇 번 받을지 안정했을 경우
// while(cin >> x) 와 같은 형태로 x 의 입력값이 존재할 때까지만 반복하게 할 수 있다.
// 또 다른 방법으로는 eof(end of file) 을 활용하는 방법이 있다.
// while(!(cin >> x >> y).eof)