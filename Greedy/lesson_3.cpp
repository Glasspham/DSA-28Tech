#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int MOD = 1e9 + 7;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n]; for(int &x : a) cin >> x;
    sort(a, a + n);
    int res = 0;
    for(int i = 0; i < n; ++i){
        res += (1ll * a[i] * i) % MOD;
        res %= MOD;
    }
    cout << res;
    return 0;
}