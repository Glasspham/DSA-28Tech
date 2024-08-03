#include<bits/stdc++.h>
using namespace std;

int a[21][21], n, cnt = 0, x_st, y_st;
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

void loang(int x, int y){
    ++cnt, a[x][y] = 1;
    cout << x << ' ' << y << endl;
    for(int i = 0; i < 4; ++i){
        int x1 = x + dx[i], y1 = y + dy[i];
        if(x1 >= 0 and x1 < n and y1 >= 0 and y1 < n and !a[x1][y1])
            loang(x1, y1);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> x_st >> y_st;
    --x_st, --y_st;
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j)
            cin >> a[i][j];
    loang(x_st, y_st);
    cout << cnt;
    return 0;
}