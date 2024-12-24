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
    string s, res; cin >> s;
    stack<char> st;
    for(char c : s) {
        if(!st.empty() and c == st.top())
            st.pop();
        else st.push(c);
    }
    if(!st.empty()) {
        string res;
        while(!st.empty()) {
            res = st.top() + res;
            st.pop();
        } cout << res;
    } else cout << "EMPTY";
    return 0;
}