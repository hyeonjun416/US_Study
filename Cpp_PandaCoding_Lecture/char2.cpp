#include <iostream>

using namespace std;

int main(){
    // 문자열 : 문자의 열.
    char a[5] = {'H', 'e', 'l', 'l', 'o'}; // Hello 이후 이상한 값 출력 됨.(null 문자 때문임.)
    char b[6] = {'H', 'e', 'l', 'l', 'o', '\0'}; // Hello 만 출력
    cout << a <<endl;
    cout << b << endl;
    char best[] = "Hello"; // 명시적으로 "" 는 null문자를 포함하고 있으므로 Hello만 출력됨
    cout << best << endl;

    return 0;
}