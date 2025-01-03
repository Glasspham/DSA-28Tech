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
    int odd = 0, even = 0;
    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        if(x % 2 == 0) ++even;
        else ++odd;
    }
    cout << (1ll * odd * (odd - 1) / 2) +  (1ll * even * (even - 1) / 2);
    return 0;
}