#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int dp[101][101];
#if 0 // Quy hoạch động từ trên xuống thấp
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, mod = 1e9 + 7; cin >> n;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= i; ++j){
            if(j == 1 or j == i) dp[i][j] = 1;
            else dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
            dp[i][j] %= mod;
            cout << dp[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
#endif

#if 1 // Đệ quy có nhớ
ll solve(int i, int j){
    if(i == j or j == 1) return 1;
    if(dp[i][j]) return dp[i][j];
    return dp[i][j] = solve(i - 1, j - 1) + solve(i - 1, j);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= i; ++j)
            cout << solve(i, j) << ' ';
        cout << endl;
    }
    return 0;
}
#endif