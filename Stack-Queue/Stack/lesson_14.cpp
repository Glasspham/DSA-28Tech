#include<bits/stdc++.h>
using namespace std;
#define ll long long

int solve(int n, int m, char c) {
    return (c == '+') ? n + m :
           (c == '-') ? n - m :
           (c == '*') ? n * m : n / m;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin >> s;
    stack<int> st;
    for(int i = s.size() - 1; i >= 0; --i) {
        if(isdigit(s[i])) st.push(s[i] - '0');
        else {
            int n1 = st.top(); st.pop();
            int n2 = st.top(); st.pop();
            st.push(solve(n1, n2, s[i]));
        }
    } cout << st.top();
    return 0;
}