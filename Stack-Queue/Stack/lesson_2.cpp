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
        if(str[3] == 'h') st.push(str.substr(5));
        else if(str[0] == 't')
            cout << st.top() << endl;
        else if(str[0] == 'p') st.pop();
    }
    return 0;
}   