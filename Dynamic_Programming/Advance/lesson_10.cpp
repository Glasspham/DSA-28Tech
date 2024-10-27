#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n + 1], dp[n + 1] = {0};
    for(int i = 1; i <= n; ++i) cin >> a[i];
    dp[1] = a[1], dp[2] = max(a[1], a[2]);
    for(int i = 3; i <= n; ++i)
        dp[i] = max(dp[i - 1], dp[i - 2] + a[i]);
    cout << dp[n];
    return 0;
}