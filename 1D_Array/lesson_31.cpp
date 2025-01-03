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
    int n, m, p; cin >> n >> m >> p;
    int a[n]; for(int &x : a) cin >> x;
    for(int i = 0; i < n; ++i) {
        if(i == p) {
            for(int i = 0; i < m; ++i) {
                int x; cin >> x;
                cout << x << ' ';
            }
        }
        cout << a[i] << ' '; 
    }
    if(n == p) {
        for(int i = 0; i < m; ++i) {
            int x; cin >> x;
            cout << x << ' ';
        }
    }
    return 0;
}

