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
    string s; cin >> s;
    int cnt = 0;
    stack<char> st;
    for(char c : s) {
        if(c == '(') st.push(c);
        else {
            if(st.empty()) {
                ++cnt;
                st.push('(');
            } else st.pop();
        }
    }
    cout << cnt + st.size() / 2;
    return 0;
}