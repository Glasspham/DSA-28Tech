#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n + 1], f[n + 1] = {0}; 
    map<int,int> mp;
    mp[0] = 1;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    ll res = 0;
    for(int i = 1; i <= n; ++i){
        f[i] = (f[i - 1] + a[i] % n + n) % n;
        res += mp[f[i]];
        ++mp[f[i]];
    }
    cout << res;
    return 0;
}