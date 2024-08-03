#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    map<char,int> mp;
    for(char c : s){
        mp[c]++;
        if(mp[c] > 1){
            cout << c << endl;
            return 0;
        }
    }
    cout << "NONE\n";
    return 0;
}