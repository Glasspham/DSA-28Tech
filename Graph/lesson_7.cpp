#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int a[1005][1005];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m; cin >> n >> m;
    for(int i = 0; i < m; ++i){
        int x, y; cin >> x >> y;
        a[x][y] = a[y][x] = 1;
    }
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}