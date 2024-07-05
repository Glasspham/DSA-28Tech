#include<bits/stdc++.h>
using namespace std;

int a[101][101], F[101][101];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m; cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            cin >> a[i][j];
    
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            F[i][j] = max(F[i - 1][j],F[i][j - 1]) + a[i][j];
    
    cout << F[n - 1][m - 1];
    return 0;
}