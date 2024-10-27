#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int n, m;
char a[100][100];
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

void DFS(int x, int y) {
    a[x][y] = '#';
    for(int i = 0; i < 4; ++i) {
        int x1 = x + dx[i], y1 = y + dy[i];
        if(x1 <= n and x1 >= 1 and y1 <= m and y1 >= 1 and a[x1][y1] == '.')
            DFS(x1, y1);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    #ifndef GLASS
    freopen("../Text.inp", "r", stdin);
    freopen("../Text.out", "w", stdout);
    #endif
    cin >> n >> m;
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= m; ++j)
            cin >> a[i][j];
    int cnt = 0;
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= m; ++j) {
            if(a[i][j] == '.') {
                ++cnt;
                DFS(i, j);
            }
        }
    }
    cout << cnt;
    return 0;
}