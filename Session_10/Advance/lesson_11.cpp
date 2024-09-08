#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string x, y, z; cin >> x >> y >> z;
    int n_x = x.size(), n_y = y.size(), n_z = z.size();
    x = '@' + x, y = '@' + y, z = '@' + z;
    vector<vector<vector<int>>> dp(n_x + 1, vector<vector<int>>(n_y + 1, vector<int>(n_z + 1, 0)));
    for(int i = 1; i <= n_x; ++i)
        for(int j = 1; j <= n_y; ++j)
            for(int l = 1; l <= n_z; ++l)
                if(x[i] == y[j] and y[j] == z[l] and x[i] == z[l])
                    dp[i][j][l] = dp[i - 1][j - 1][l - 1] + 1;
                else dp[i][j][l] = max({dp[i - 1][j][l], dp[i][j - 1][l], dp[i][j][l - 1]});
    cout << dp[n_x][n_y][n_z];
    return 0;
}