#include<bits/stdc++.h>
using namespace std;
int a[200005], F[200005];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k, q; cin >> n >> k >> q;
    for(int i = 1; i <= n; ++i){
        int l, r; cin >> l >> r;
        a[l] += 1, a[r + 1] -= 1;
    }
    for(int i = 1; i <= 200000; ++i)
        a[i] += a[i - 1];
    int dem = 0;
    for(int i = 1; i <= 200000; ++i){
        if(a[i] >= k) ++dem;
        F[i] = dem;
    }
    while(q--){
        int l, r; cin >> l >> r;
        cout << F[r] - F[l - 1] << endl;
    }
    return 0;
}