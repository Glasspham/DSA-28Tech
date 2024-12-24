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
    int n; cin >> n;
    cin.ignore();
    stack<string> st;
    for(int i = 0; i < n; ++i) {
        string str; getline(cin, str);
        if(str[3] != ' ' and str[3] == 'h')
            st.push(str.substr(5));
        else if(str[3] != ' ' and str[3] == 'w') {
            if(st.empty()) cout << "EMPTY\n";
            else {
                stack<string> tmp = st;
                string res;
                while(!st.empty()) {
                    res = st.top() + ' ' + res;
                    st.pop();
                } cout << res << endl;
                st = tmp;
            }
        } else st.pop();
    }    
    return 0;
}