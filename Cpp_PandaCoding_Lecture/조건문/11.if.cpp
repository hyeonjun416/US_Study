#include <iostream>

using namespace std;

int main(){
    // 분기 구문 : 여러가지를 갈래길을 제시하고, 컴퓨터가 하나의 길을 선택하여 사용할 수 있게 하는 것
    // if 구문과 switch 구문이 존재
    // if(조건){코드} 형태
    if (true)
        cout << "True" << endl;
    else if (true)
        cout << "#2" << endl;
    
    else cout << "#1" << endl;
    
    // 컴퓨터는 if-else를 하나의 블럭으로 판단
    cout << "The end";
    return 0;
}