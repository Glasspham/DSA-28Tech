#include<bits/stdc++.h>
using namespace std;

int n, m, s, t, u, v, a[101][101];
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

void loang(int x, int y){
    a[x][y] = 0;
    for(int i = 0; i < 4; ++i){
        int x1 = x + dx[i], y1 = y + dy[i];
        if(x1 >= 0 and x1 < n and y1 >= 0 and y1 < m and a[x1][y1])
            loang(x1, y1);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m >> s >> t >> u >> v;
    --s, --t, --u, --v;
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            cin >> a[i][j];
    loang(s, t);
    if(a[u][v] == 0) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}