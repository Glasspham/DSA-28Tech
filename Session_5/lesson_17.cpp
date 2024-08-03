#include<bits/stdc++.h>
using namespace std;

int n, m, a[51][51];
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

void loang(int x, int y){
    a[x][y] = 0;
    for(int i = 0; i < 8; ++i){
        int x1 = x + dx[i], y1 = y + dy[i];
        if(x1 >= 0 and x1 < n and y1 >= 0 and y1 < m and a[x1][y1]){
            loang(x1, y1);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            cin >> a[i][j];
    int dem = 0;
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            if(a[i][j] == 1){
                ++dem;
                loang(i,j);
            }
    cout << dem << endl;
    return 0;
}