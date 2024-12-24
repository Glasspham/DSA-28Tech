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
    stack<int> st;
    bool f = true;
    for(int i = 0; i < s.size(); ++i) {
        if(s[i] == '(') st.push(i);
        else if(s[i] == ')') {
            int idx = st.top(); st.pop();
            if(s[idx + 1] == '(' and s[i - 1] == ')') {
                cout << "YES\n";
                return 0;
            } else if(idx - i == 2) {
                cout << "YES\n";
                return 0;
            }
        }
    }
    cout << "NO\n";
    return 0;
}