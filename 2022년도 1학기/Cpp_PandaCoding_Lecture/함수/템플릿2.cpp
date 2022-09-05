#include <iostream>

using namespace std;

template <class Any>
Any sum(int, Any);
template <class Any>
Any sum(Any, Any);
int main(){
    int a = 3;
    float c = 3.14;
    cout << sum(a,c) << endl;
    return 0;
}

template <class Any>
Any sum(int a, Any b) {
    return a+b;
}

template <class Any>
Any sum(Any a, Any b)
{
    return a+b;
}

// 이 파일에 작성된 내용처럼 template 역시 오버로딩 사용 가능