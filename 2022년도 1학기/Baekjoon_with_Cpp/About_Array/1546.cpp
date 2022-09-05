#include <iostream>

using namespace std;

int main()
{
    int subject;
    cin >> subject;
    double *num=new double[subject];
    int max = 0;
    for(int i = 0; i<subject; i++)
    {
        cin >> num[i];
        if(num[i]>max) max=num[i];
    }
    
    double *result_score = new double[subject];

    double sum = 0;
    for(int i = 0; i<subject; i++)
    {
        result_score[i] = num[i]/max*100;
        sum += result_score[i];
    }

    double avg = sum/subject;
    cout << avg << endl;
    return 0;
}