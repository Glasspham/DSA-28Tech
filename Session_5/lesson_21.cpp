#include<bits/stdc++.h>
using namespace std;
int a[101][101], n, s, t, u, v;
int dx[8] = {-2, -2, -1, +1, +2, +2, +1, -1};
int dy[8] = {-1, +1, +2, +2, +1, -1, -2, -2};

void loang(int x, int y){
    a[x][y] = 0;
    cout << x << ' ' << y << endl;
    for(int i = 0; i < 8; ++i){
        int nx = x + dx[i], ny = y + dy[i];
        if(nx >= 0 and nx < n and ny >= 0 and ny < n and a[nx][ny])
            loang(nx, ny);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> s >> t >> u >> v;
    --u, --v;
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j)
            cin >> a[i][j];

    loang(s,t);
    if(a[u][v] == 0) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}