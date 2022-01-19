#include <iostream>
#include <cstring> //strlen() 함수를 사용하기 위해

using namespace std;

int main(){
    const int size = 15; // 상수 지정
    char name1[size];   // 비어있는 배열
    char name2[size] = "C++programing";// 문자열 상수로 초기화된 배열

    cout << "안녕하세요! 저는 " << name2;
    cout << "입니다! 성함이 어떻게 되시나요?\n";
    cin >> name1; // cin 은 >> 오른쪽에 오는 변수에 입력내용을 대입
    // cin은 공백을 문장의 끝으로 생각하기 때문에, < space, tab, enter > 사용 시 그 뒷부분의 내용은 변수에 저장되지 않는다.
    // 공백을 포함하여 입력받는 방법
    cin.getline(name1, size);
    //cin.getline(입력을 저장할 변수, 입력받을 최대 크기)
    //get 과 getline은 동일한 방식으로 동작
    cout << "음, " << name1 << "씨, 당신의 이름은 ";
    cout << strlen(name1) << "자입니다만\n"; // strlen : 문자열의 길이를 반환하는 함수
    cout << sizeof(name1) << "바이트 크기의 배열에 지정되었습니다\n"; // sizeof : 변수의 바이트의 크기를 반환
    // 여기서는 name1의 배열의 크기를 15로 지정해줬기때문에 15가 출력됨.
    cout << "이름이" << name1[0] << "자로 시작되는군요.\n";
    name2[3] = '\0'; // 4번째 문자에 null  문자를 대입함으로써 문자열의 끝을 지정
    cout << "제 이름의 처음 새 문자는 다음과 같습니다 : "; // cout 은 문자열 출력 시 null 문자까지만 출력을 진행
    cout << name2 << endl;
    return 0;
}