#include<bits/stdc++.h>
using namespace std;

int a[501][501], n, m, cnt = 0, value_max = INT_MIN;
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

void loang(int x, int y){
    ++cnt, a[x][y] = 0;
    for(int i = 0; i < 4; ++i){
        int x1 = x + dx[i], y1 = y + dy[i];
        if(x1 >= 0 and x1 < n and y1 >= 0 and y1 < m and a[x1][y1])
            loang(x1, y1);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            cin >> a[i][j];
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            if(a[i][j] == 1){
                loang(i, j);
                value_max = max(value_max, cnt);
                cnt = 0;
            }
    cout << value_max;
    return 0;
}