#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, t; cin >> n >> t;
    ll a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        if(i != 0) a[i] += a[i - 1];
    }
    while (t--){
        int l, r; cin >> l >> r;
        if(l == 0) cout << a[r] << endl;
        else cout << a[r] - a[l - 1] << endl;
    }
    return 0;
}