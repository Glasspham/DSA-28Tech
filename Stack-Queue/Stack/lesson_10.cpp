#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin >> s;
    stack<string> st;
    for(int i = s.size() - 1; i >= 0; --i) {
        if(isalpha(s[i])) st.push(string(1, s[i]));
        else {
            string c1 = st.top(); st.pop();
            string c2 = st.top(); st.pop();
            st.push(c1 + c2 + s[i]);
        }
    } cout << st.top() << endl;
    return 0;
}