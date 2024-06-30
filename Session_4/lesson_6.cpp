#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    sort(s.begin(), s.end());
    while(s[0] == '0') s.erase(0,1);
    cout << s << endl;
    return 0;
}