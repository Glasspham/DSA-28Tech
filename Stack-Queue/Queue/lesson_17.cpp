#include<bits/stdc++.h>
using namespace std;
#define ll long long
int matrix[1005][1005], a[1005][1005], M, N;
int BFS() {
    queue<pair<int,int>> qp;
    qp.push({1, 1});
    matrix[1][1] = 1;
    while(!qp.empty()) {
        auto[x, y] = qp.front(); qp.pop();
        if(matrix[M][N]) return matrix[M][N] - 1;
        int x1 = x + a[x][y], y1 = y + a[x][y];
        if(y1 <= N and !matrix[x][y1]) {
            qp.push({x, y1});
            matrix[x][y1] = matrix[x][y] + 1;
        }
        if(x1 <= M and !matrix[x1][y]) {
            qp.push({x1, y});
            matrix[x1][y] = matrix[x][y] + 1;
        }
    } return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) {
        memset(matrix, 0, sizeof(matrix));
        cin >> M >> N;
        for(int i = 1; i <= M; ++i)
            for(int j = 1; j <= N; ++j)
                cin >> a[i][j];
        cout << BFS() << endl;
    }
    return 0;
}