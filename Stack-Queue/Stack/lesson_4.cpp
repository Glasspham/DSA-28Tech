#include<bits/stdc++.h>
using namespace std;
#define ll long long

int solve(string s) {
    stack<char> st;
    int cnt = 0;
    for(char c : s) {
        if(c == '(')
            st.push(c);
        else {
            ++cnt;
            if(!st.empty()) {
                --cnt;
                st.pop();
            }
        }
    } return cnt + st.size();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef GLASS
    freopen("../../Text.inp", "r", stdin);
    freopen("../../Text.out", "w", stdout);
    #endif
    string s; cin >> s;
    cout << solve(s);
    return 0;
}