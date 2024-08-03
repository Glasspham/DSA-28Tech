#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int res = 0;
    string s; cin >> s;
    for(char c : s)
        if(isdigit(c))
            res += c - '0';
    cout << res << endl;
    return 0;
}