#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9 + 7;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef GLASS
    freopen("../Text.inp", "r", stdin);
    freopen("../Text.out", "w", stdout);
    #endif
    ll tong = 0, tich = 1;
    int n; cin >> n;
    for(int i = 0; i < n; ++i) {
        int num; cin >> num;
        tong += num;
        tong %= MOD;
        tich *= num;
        tich %= MOD;
    }
    cout << tong << endl << tich;
    return 0;
}