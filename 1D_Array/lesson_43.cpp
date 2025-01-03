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
    #if 1
    int a[n];
    for(int &x : a) cin >> x;
    for(int i = 0; i < n; ++i) {
        int sum = a[i];
        cout << sum << ' ';
        for(int j = i + 1; j < n; ++j) {
            sum += a[j];
            cout << sum << ' ';
        }
    }
    #endif
    #if 1
    int prefix[n + 1];
    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        prefix[i + 1] = prefix[i] + x;
    }
    for(int i = 0; i < n; ++i) 
        for(int j = i; j < n; ++j)
            cout << prefix[j + 1] - prefix[i] << ' ';
    #endif
    return 0;
}