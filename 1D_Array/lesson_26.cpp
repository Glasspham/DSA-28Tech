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
    int f[1000005] = {0};
    int n, cnt = 0; cin >> n;
    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        if(!f[x]) {
            f[x] = 1;
            ++cnt;
        }
    }
    cout << cnt;
    return 0;
}