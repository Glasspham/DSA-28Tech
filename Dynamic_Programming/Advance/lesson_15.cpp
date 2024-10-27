#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int dp[100001];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, s; cin >> n >> s;
    int a[n + 1];
    for(int i = 1; i <= n; ++i) cin >> a[i];
    for(int i = 1; i <= s; ++i) dp[i] = 1e9;
    #if 1 // Cách viết thứ nhất
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= s; ++j)
            if(a[i] <= j)
                dp[j] = min(dp[j - a[i]] + 1, dp[j]);
    #endif

    #if 1 // Cách viết thứ hai
    for(int i = 1; i <= s; ++i)
        for(int j = 1; j <= n; ++j)
            if(a[j] <= i)
                dp[i] = min(dp[i - a[j]] + 1, dp[i]);
    #endif
    if(dp[s] == 1e9) cout << -1;
    else cout << dp[s];
    return 0;
}