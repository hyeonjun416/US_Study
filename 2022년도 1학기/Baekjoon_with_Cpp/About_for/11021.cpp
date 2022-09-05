//A+B -7
#include <iostream>

using namespace std;

int main(){
    int num_a,num_b, count;
    cin >> count;
    for(int i = 1; i<=count; i++){
        cin >> num_a >> num_b;
        cout << "Case #" << i << ": " << num_a + num_b  << endl;
    }
    return 0;
}