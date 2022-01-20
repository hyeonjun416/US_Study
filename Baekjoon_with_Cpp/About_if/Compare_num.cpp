#include <iostream>

using namespace std;

int main(){
    int A,B;
    cin >> A >> B; 
    /* cin 은 애초에 공백을 문장의 끝으로 생각하기때문에
    위와 같이 작성을하면 띄어쓰기를 통해 구분 입력이 가능하다.
    */
   if(A>B) cout << ">" << endl;
   else if(A==B) cout << "==" << endl;
   else cout << "<" << endl;

    return 0;
}