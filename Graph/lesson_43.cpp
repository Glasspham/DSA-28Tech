#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n, m, s1, s2,t1 , t2, ok = 0;
char a[500][500];
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
void Try(int x, int y, int i_prev, int cnt) {
    if(cnt > 3) return;
    if(x == t1 and y == t2) {
        ok = 1;
        return;
    }
    if(ok) return;
    a[x][y] = '*';
    for(int i = 0; i < 4; ++i) {
        int x1 = x + dx[i], y1 = y + dy[i];
        if(x1 >= 1 and x1 <= n and y1 >= 1 and y1 <= m and a[x1][y1] != '*') {
            if(i_prev == i) Try(x1, y1, i, cnt);
            else Try(x1, y1, i, cnt + 1);
        }
    }
    a[x][y] = '.';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef GLASS
    freopen("../Text.inp", "r", stdin);
    freopen("../Text.out", "w", stdout);
    #endif
    cin >> n >> m;
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= m; ++j) {
            cin >> a[i][j];
            if(a[i][j] == 'S')
                s1 = i, s2 = j;
            else if(a[i][j] == 'T')
                t1 = i, t2 = j;
        }
    }
    Try(s1, s2, -1, 0);
    if(ok) cout << "YES";
    else cout << "NO";
    return 0;
}