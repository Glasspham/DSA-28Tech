#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s1, s2; cin >> s1 >> s2;
    int cnt5_s1 = 0, cnt6_s1 = 0, cnt5_s2 = 0, cnt6_s2 = 0;
    for(char c : s1){
        if(c == '5') ++cnt5_s1;
        else if(c == '6') ++cnt6_s1;
    }
    for(char c : s2){
        if(c == '5') ++cnt5_s2;
        else if(c == '6') ++cnt6_s2;
    }
    cout << stoi(s1) + cnt5_s1 + stoi(s2) + cnt5_s2 << ' '
         << stoi(s1) - cnt6_s1 + stoi(s2) - cnt6_s2;
    return 0;
}