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
    queue<string> q;
    string str;
    while(getline(cin, str)) {
        if(str[2] == 'S') {
            str = str.substr(5);
            q.push(str);
        } else if(str[2] == 'I') {
            cout << ((!q.empty()) ? q.front() : "NONE") << endl;
        } else if(str[2] == 'P') q.pop();
    }
    return 0;
}