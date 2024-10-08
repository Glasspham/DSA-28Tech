#include<bits/stdc++.h>
using namespace std;

using ll = long long;
bool f[1001][1001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, s; cin >> n >> s;
    int a[n + 1];
    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
        f[i][0] = true;
    }

    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= s; ++j)
            if(j >= a[i])
                f[i][j] = f[i - 1][j - a[i]] or f[i - 1][j];
            else f[i][j] = f[i - 1][j];

    cout << f[n][s];
    return 0;
}