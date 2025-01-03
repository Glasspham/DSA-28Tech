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
    int n; cin >> n;
    string res;
    for(int i = 0; i < n; ++i) {
        string c; cin >> c;
        res = c + ' ' + res;
    }
    cout << res;
    return 0;
}