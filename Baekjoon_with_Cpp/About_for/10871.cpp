 //X보다 작은 수
 #include <iostream>

 using namespace std;

 int main()
 {
    int count, compare;
    cin >> count >> compare;
    int num[count];
    for(int i = 0; i<count; i++) cin >> num[i];
    for(int i = 0; i<count; i++){
        if(num[i]<compare) cout << num[i] << " ";
        else continue;
    }
    return 0;
 }