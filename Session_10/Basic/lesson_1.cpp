#include<bits/stdc++.h>
using namespace std;

using ll = long long;
ll dp[1000001], mod = 1e9 + 7;
ll solve(ll n){
    if(n == 1) return 1;
    if(dp[n] != 0) return dp[n];
    return dp[n] = (n * solve(n - 1)) % mod;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}