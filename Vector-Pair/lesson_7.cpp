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
    for(int i = 0; i < n; ++i) {
        int x, y; cin >> x >> y;
        cout << fixed << setprecision(2) 
             << sqrt(pow(x, 2) + pow(y, 2)) << ' ';
    }
    return 0;
}