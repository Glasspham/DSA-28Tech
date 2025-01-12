#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool valid(char x, char y) {
    return ((x == '(' and y == ')') or 
            (x == '[' and y == ']') or
            (x == '{' and y == '}'));
}

bool check(string s) {
    stack<char> st;
    for(char c : s) {
        if(c == '(' or c == '{' or c == '(')
            st.push(c);
        else {
            if(st.empty()) return false;
            char a = st.top(); st.pop();
            if(!valid(a, c)) return false;
        }
    }
    return st.empty();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin >> s;
    if(check(s)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}