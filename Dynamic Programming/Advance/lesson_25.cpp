#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s1, s2; cin >> s1 >> s2;
    int n = s1.size(), m = s2.size();
    s1 = "0" + s1, s2 = "0" + s2;
    int dp[n + 1][m + 1] = {0};
    for(int i = 1; i <= n; ++i) dp[i][0] = i;
    for(int i = 1; i <= m; ++i) dp[0][i] = i;
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= m; ++j)
            if(s1[i] != s2[j])
                dp[i][j] = min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]}) + 1;
            else dp[i][j] = dp[i - 1][j - 1];
    cout << dp[n][m];
    return 0;
}