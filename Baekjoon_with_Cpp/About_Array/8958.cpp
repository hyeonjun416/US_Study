#include <iostream>

using namespace std;

int main()
{
    int case_cnt;
    cin >> case_cnt;
    string tmp;
    int *score_res;
    score_res = new int[case_cnt];
    int score;
    int index_cnt=0;
    for(int i =0;i<case_cnt;i++)
    {
        score=0;
        cin >> tmp;
        while(1)
        {
            int index_tmp=0;
            if(tmp[index_tmp]=='O')
            {
                score++;
                score_res[index_cnt] = score;
                continue;
            }
            else if(tmp[index_tmp]=='\0') break;
            else
            {
                score=0;
                continue;
            }
        }
        index_cnt++;
    }
    for(int i=0; i<case_cnt; i++) cout << score_res[i] << endl;
    
    return 0;
}