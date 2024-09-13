#include<bits/stdc++.h>
using namespace std;

using ll = long long;
ll mod = 1e9 + 7;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k; cin >> n >> k;
    ll dp[100001] = {0};
    dp[0] = dp[1]= 1;
    for(int i = 2; i <= n; ++i)
        for(int j = 1; j <= k; ++j)
            if(i >= j)
                dp[i] = (dp[i] + dp[i - j]) % mod;
    cout << dp[n] << endl;
    return 0;
}