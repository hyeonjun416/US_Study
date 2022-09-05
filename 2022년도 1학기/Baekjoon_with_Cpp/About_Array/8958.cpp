#include <iostream>

using namespace std;
// OX 입력을 case_cnt만큼 반복한다.
// 이때, string tmp라는 문자열은 반복문 안에 작성 => 프로그램 목적인 점수는 그때그때 score_res라는 배열에 저장할 것이기 때문
// score_res라는 배열에 각각의 tmp 문자열에 대한 점수를 계산하여 인덱스 순서대로 넣어주고, 마지막에 출력
int main()
{
    int case_cnt; // OX 받을 횟수
    cin >> case_cnt; // case_cnt 입력
    string tmp;// OX를 입력받을 문자열
    int *score_res;
    score_res = new int[case_cnt]{0}; // score_res라는 배열을 case_cnt 크기만큼 동적할당
    // 여기서 주의할 점은 {0}을 통해 초기화를 해줘야 함. 그렇지않으면 정확한 값이 나오지 않음. 쓰레기 값 때문이라고 판단.
    int score_tmp; // 조건에 따른 점수 계산에 사용할 임의의 점수를 나타내는 변수
    int index=0;
    for(int i = 0; i<case_cnt; i++) // case_cnt 만큼 반복 = tmp 입력받을 횟수
    {
        //필요한 내용 : tmp 입력, 조건에 따라 점수를 계산하고 이를 마지막에 score_res[i]에 대입
        cin >> tmp;
        // 조건에 따른 점수 계산은 어떻게 할 것인가?
        // score_tmp라는 변수를 생성해서, o일때 더해주고, x가 나오면 다시 초기화 시키는 형태로 진행
        score_tmp = 0;
        for(int l = 0; l<tmp.length(); l++)
        {
            if(tmp[l]=='O')
            {
                score_tmp++;
                score_res[i] = score_res[i] + score_tmp;
            }
            else if(tmp[l]='X') score_tmp=0;
        }
    }
    for(int a = 0; a<case_cnt; a++) cout << score_res[a] << endl;
    return 0;
}
//    int *score_res;
//    score_res = new int[case_cnt]; // score_res라는 배열을 case_cnt 크기만큼 동적할당