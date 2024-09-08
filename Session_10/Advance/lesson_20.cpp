#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int matrix[101][101], dp[101][101];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, res = 0; cin >> n >> m;
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= m; ++j)
            cin >> matrix[i][j];

    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            if(matrix[i][j])
                dp[i][j] = min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]}) + 1;
            else dp[i][j] = 0;
            res = max(res, dp[i][j]);
        }
    }

    cout << res;
    return 0;
}