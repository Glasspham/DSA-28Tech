#include<bits/stdc++.h>
using namespace std;
#define ll long long
int pre(char c) {
    return (c == '+' or c == '-') ? 1 : 
           (c == '*' or c == '/') ? 2 : 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef GLASS
    freopen("../Text.inp", "r", stdin);
    freopen("../Text.out", "w", stdout);
    #endif
    string s; cin >> s;
    stack<char> st;
    string res;
    for(char c : s) {
        if(c == '(') st.push(c);
        else if(isalpha(c)) res += c;
        else if(c == ')') {
            while(st.top() != '(') {
                res += st.top();
                st.pop();
            } st.pop();
        } else {
            while(!st.empty() and pre(st.top()) >= pre(c)) {
                res += st.top();
                st.pop();
            } st.push(c);
        } 
    }
    while(!st.empty()) {
            res += st.top();
            st.pop();
        }
    cout << res;
    return 0;
}