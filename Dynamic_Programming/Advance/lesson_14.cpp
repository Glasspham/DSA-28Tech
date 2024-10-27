#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    ll dp[n + 1] = {0}, mod = 1e9 + 7;
    dp[0] = 1;
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= 6; ++j)
            if(i >= j){
                dp[i] += dp[i - j];
                dp[i] %= mod;
            }
    cout << dp[n];
    return 0;
}