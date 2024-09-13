#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int n, m,  a[501][501], Res[501][501];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= m; ++j)
            cin >> a[i][j];
            
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= m; ++j)
            Res[i][j] = max({Res[i - 1][j], Res[i][j - 1], Res[i - 1][j - 1]}) + a[i][j];
    
    cout << Res[n][m];
    return 0;
}