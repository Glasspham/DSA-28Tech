#include<bits/stdc++.h>
using namespace std;

using ll = long long;

ll dp[1000001], mod = 1e9 + 7;
ll solve(ll n){
    if(n == 0 or n == 1) return 0;
    if(n == 2) return 1;
    if(dp[n] != 0) return dp[n];
    return dp[n] = (solve(n - 1) + solve(n - 2) + solve(n - 3)) % mod;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}