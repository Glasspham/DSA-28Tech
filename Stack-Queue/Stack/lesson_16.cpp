#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    stack<string> st;
    string str;
    while(getline(cin, str)){
        stringstream ss(str);
        string s;
        while(ss >> s) st.push(s);
    }
    while(!st.empty()) {
        cout << st.top() << ' ';
        st.pop();
    }
    return 0;
}