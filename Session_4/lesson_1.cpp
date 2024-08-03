#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    if(s.size() % 2 == 0) cout << "NOT FOUND\n";
    else cout << s[s.size() % 2];
    return 0;
}