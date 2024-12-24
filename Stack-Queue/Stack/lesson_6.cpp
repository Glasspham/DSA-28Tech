#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef GLASS
    freopen("../../Text.inp", "r", stdin);
    freopen("../../Text.out", "w", stdout);
    #endif
    string s; int k; cin >> s >> k;
    stack<pair<char,int>> sp;
    for(char c : s) {
        if(!sp.empty() and c == sp.top().first) {
            ++sp.top().second;
            if(sp.top().second == k)
                sp.pop();
        } else sp.push({c, 1});
    }
    if(!sp.empty()) {
        string res;
        while(!sp.empty()) {
            for(int i = 0; i < sp.top().second; ++i)
                res = sp.top().first + res;
            sp.pop();
        } cout << res;
    } else cout << "EMPTY";
    return 0;
}