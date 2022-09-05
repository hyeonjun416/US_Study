#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int>org;
vector<int>sub;

int d(string n){
    int length = n.length();
    int numa = stoi(n);
    int sum = numa;
    for(int i = 0; i<length; i++){
        int tmp_num = n[i] - '0';
        sum += tmp_num;
    }
    return sum;
}

int main(void){
    vector<int> res;
    for(int i = 1; i<=100; i++) org.push_back(i);
    for(int i = 1; i<=100; i++){ // [0]=1,[1]=2,[2]=3 ...
        int del_idx = d(to_string(i));
        sub.push_back(del_idx);
        // cout << sub[i] << endl;
    }
    sort(sub.begin(), sub.end());
    // for(int i = 0; i < sub.size(); i++) cout << sub[i] << endl;
    res.resize(org.size()+sub.size());
    auto itr = set_difference(org.begin(), org.end(), sub.begin(), sub.end(), res.begin());
    res.erase(itr, res.end());
    for(int i = 0; i<res.size(); i++) cout << res[i] << endl;

    return 0;
}