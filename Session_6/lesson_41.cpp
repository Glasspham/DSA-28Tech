#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x; cin >> n >> x;
    int a[n]; for(int &x : a) cin >> x;
    ll tong = 0, ans = 0; map<ll, int> tmp;
    for(int i = 0; i < n; ++i){
        tong += a[i];
        if(tong == x) ++ans;
        if(tmp.count(tong - x)) ++ans; 
        tmp[tong] = 1;
    }
    cout << ans;
    return 0;
}