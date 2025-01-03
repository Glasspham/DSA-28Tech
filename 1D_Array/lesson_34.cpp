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
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        if(i == 0) {
            cout << a[i] << ' ';
            continue;
        }
        if(a[i] != a[i - 1])
            cout << a[i] << ' ';
    }
    return 0;
}