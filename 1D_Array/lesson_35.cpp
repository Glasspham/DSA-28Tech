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
    int a[n];
    for(int &x : a) cin >> x;
    for(int i = 0; i < n - 1; ++i) {
        int x; cin >> x;
        if(x == 1)
            a[0] += a[i + 1];
        else a[0] -= a[i + 1];
    }
    cout << a[0];
    return 0;
}