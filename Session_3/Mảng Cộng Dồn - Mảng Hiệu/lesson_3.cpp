#include<bits/stdc++.h>
using namespace std;
#define ll long long
// prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + arr[i][j]
// https://usaco.guide/silver/more-prefix-sums?lang=cpp

// ll a[1005][1005], prefix[1005][1005];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m; cin >> m >> n;
    ll a[m + 1][n + 1], prefix[m + 1][n + 1];
    for(int i = 1; i <= m; ++i)
        for(int j = 1; j <= n; ++j)
            cin >> a[i][j];

    for(int i = 1; i <= m; ++i)
        for(int j = 1; j <= n; ++j)
            prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + a[i][j];

    int t; cin >> t;
    while (t--){
        int x1, y1, x2, y2; cin >> x1 >> x2 >> y1 >> y2;
        cout << prefix[x2][y2] - prefix[x1 - 1][y2] - prefix[x2][y1 - 1] + prefix[x1 - 1][y1- 1] << endl;
    }
    return 0;
}