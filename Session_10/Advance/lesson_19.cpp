#include<bits/stdc++.h>
using namespace std;

using ll = long long;
ll mod = 1e9 + 7;
char matrix[1001][1001];
int dp[1001][1001];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= n; ++j)
            cin >> matrix[i][j];
    dp[0][1] = 1;
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= n; ++j)
            if(matrix[i][j] == '.')
                dp[i][j] = (dp[i][j - 1] + dp[i - 1][j]) % mod;
            else dp[i][j] = 0;
    
    cout << dp[n][n];
    return 0;
}