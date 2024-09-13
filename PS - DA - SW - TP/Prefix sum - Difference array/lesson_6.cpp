#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q; cin >> n >> q;
    int a[n] = {0};
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    int d[n + 2] = {0};
    while(q--){
        int l, r; cin >> l >> r;
        --l, --r; // Vì 1 <= l <= r -> mảng phải xuất phát từ 1 -> n
        d[l] += 1, d[r + 1] -= 1; // Đếm số lần trùng trong truy vấn q
    }
    ll F[n]; F[0] = d[0];
    for(int i = 1; i < n; ++i)
        F[i] = F[i - 1] + d[i];
    for(int x : F) cout << x << ' ';

    sort(a, a + n, greater<int>());
    sort(F, F + n, greater<ll>());
    ll res = 0;
    for(int i = 0; i < n; ++i)
        res += 1ll * a[i] * F[i];
    cout << res << endl;
    return 0;
}