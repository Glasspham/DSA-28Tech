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
    for(int i = 1; i < n - 1; ++i) 
        if(a[i] < a[i + 1] and a[i] < a[i - 1])
            cout << a[i] << ' '; 
    return 0;
}