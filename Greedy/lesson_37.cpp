#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k; cin >> n >> k;
    int a[n]; for(int &x : a) cin >> x;
    sort(a, a + n);
    ll ans = 1e18;  
    for(int i = 0; i <= n - k; ++i)
        ans = min(ans, 0ll + a[i + k - 1] - a[i]);
    cout << ans << endl;
    return 0;
}