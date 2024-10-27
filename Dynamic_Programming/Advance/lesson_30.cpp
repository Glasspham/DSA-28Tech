#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int n, m, dp[1001][1001];
int solve(int n, int m){
    if(n == m) return 0;
    if(dp[n][m] != 0) return dp[n][m];
    int res = 1e9;
    for(int i = 1; i <= m - 1; ++i)
        res = min(res, solve(n, i) + solve(n, m - i) + 1);
    for(int i = 1; i <= n - 1; ++i)
        res = min(res, solve(i, m) + solve(n - i, m) + 1);
    return dp[n][m] = res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    cout << solve(n, m);
    return 0;
}