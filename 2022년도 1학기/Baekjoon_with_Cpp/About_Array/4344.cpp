#include <iostream>

using namespace std;

int main()
{
    int test_case; // test_case 개수
    cin >> test_case;
    int students; // test_case 만큼 학생 수를 입력 받을 것
    int *score_std; // 각 test_case에서 학생 수만큼 크기를 할당할 것.
    double *result; // 출력할 값들을 여기에 저장
    result= new double[test_case]{0};
    for(int i = 0; i<test_case; i++)
    {
        int sum=0;
        double avg=0, cnt=0;
        cin >> students;
        score_std = new int[students]{0};
        for(int j = 0; j<students; j++)
        {
            cin >> score_std[j];
            sum+=score_std[j];
        }
        avg=sum/students;
        for(int k = 0; k<students; k++)
        {
            if(score_std[k]>avg) cnt++;
        }
        result[i] = (cnt/students) * 100;
    }
    for(int i = 0; i<test_case; i++)
    {
        cout << fixed;
        cout.precision(3);
        cout << result[i] << "%" << endl;
    }
}