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
    string r1, r2, r3, r4, r5, a[n];
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        r1 += a[i] + ' ';
        r2 = a[i] + ' ' + r2;
        if(i % 2 == 0)
            r3 += a[i] + ' ';
        else r4 += a[i] + ' ';
        if(i == 0) continue;
        r5 += to_string(stoi(a[i]) + stoi(a[i - 1])) + ' ';
    }
    cout << r1 << endl << r2 << endl << r3 << endl << r4 << endl << r5;
    return 0;
}