#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q; cin >> n >> q;
    int a[n] = {0}, d[n + 1] = {0};
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        d[i] = a[i] - a[i - 1];
    }
    while(q--){
        int l, r, k; cin >> l >> r >> k;
        d[l] += k, d[r + 1] -= k;
    }
    ll F[n];
    F[0] = d[0];
    for(int i = 1; i < n; ++i)
        F[i] = F[i - 1] + d[i];
    for(int i = 1; i < n; ++i)
        cout << F[i] << ' ';
    return 0;
}