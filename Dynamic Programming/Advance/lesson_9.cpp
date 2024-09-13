#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string N, M; cin >> N >> M;
    int n = N.size(), m = M.size();
    cout << n << ' ' << m;
    N = "@" + N, M = "@" + M;
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= m; ++j)
            if(N[i] == M[j]) dp[i][j] = dp[i - 1][j - 1] + 1;
            else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]); 
    cout << dp[n][m];
    return 0;
}   