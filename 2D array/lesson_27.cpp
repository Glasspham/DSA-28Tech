#include<bits/stdc++.h>
using namespace std;
long long a[101][101], f[101][101];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j)
            cin >> a[i][j];

    for(int i = 0; i < n; ++i){
        f[-1][i] = -1e9;
        f[n][i] = -1e9;
    }

    for(int i = 0;  i < n; ++i)
        f[i][0] = a[i][0];

    for(int j = 1; j < n; ++j)
        for(int i = 1; i < n; ++i)
            f[i][j] = max({f[i - 1][j - 1], f[i][j - 1], f[i + 1][j - 1]}) + a[i][j];

    long long res = INT_MIN;
    for(int i = 0; i < n; ++i) res = max(res, f[i][n - 1]);
    cout << res;
    return 0;
}