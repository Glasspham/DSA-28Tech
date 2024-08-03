#include<bits/stdc++.h>
using namespace std;

string KT(string s){
    for(int i = 0; i < s.size(); ++i)
        if(abs(s[i + 1] - s[i]) == 1)
            return "YES\n";
    return "NO\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    cout << KT(s);
    return 0;
}