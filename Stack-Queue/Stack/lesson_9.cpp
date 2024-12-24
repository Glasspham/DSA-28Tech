#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef GLASS
    freopen("../Text.inp", "r", stdin);
    freopen("../Text.out", "w", stdout);
    #endif
    string s; cin >> s;
    stack<string> save;
    for(int i = s.size() - 1; i >= 0; --i) {
        if(isalpha(s[i])) save.push(string(1, s[i]));
        else {
            string c1 = save.top(); save.pop();
            string c2 = save.top(); save.pop();
            save.push("(" + c1 + s[i] + c2 + ")");
        }
    }
    cout << save.top();
    return 0;
}