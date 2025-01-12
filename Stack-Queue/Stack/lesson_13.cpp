#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin >> s;
    stack<string> st;
    for(char c : s) {
        if(isalpha(c)) st.push(string(1, c));
        else {
            string c1 = st.top(); st.pop();
            string c2 = st.top(); st.pop();
            st.push("(" + c2 + c + c1 + ")");
        }
    } cout << st.top();
    return 0;
}