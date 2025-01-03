#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool Check(int a, int b, int c) {
    return b > a and b > c;
}

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
    for(int i = 1; i < n - 1; ++i)
        if(Check(a[i - 1], a[i], a[i + 1]))
            cout << a[i] << ' ';
    return 0;
}