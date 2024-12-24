#include<bits/stdc++.h>
using namespace std;
#define ll long long

int dx[] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[] = {-1, 1, -2, 2, -2, 2, -1, 1};
int matrix[9][9];
int BFS(int x, int y, int t1, int t2) {
    queue<pair<int,int>> qp;
    matrix[x][y] = 1;
    qp.push({x, y});
    while(!qp.empty()) {
        auto[x, y] = qp.front(); qp.pop();
        if(x == t1 and y == t2) return matrix[x][y] - 1;
        for(int i = 0; i < 8; ++i) {
            int x1 = x + dx[i], y1 = y + dy[i];
            if(x1 >= 1 and y1 >= 1 and x1 <= 8 and y1 <= 8 and !matrix[x1][y1]) {
                qp.push({x1, y1});
                matrix[x1][y1] = matrix[x][y] + 1;
            }
        }
    } return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef GLASS
    freopen("../../Text.inp", "r", stdin);
    freopen("../../Text.out", "w", stdout);
    #endif
    int n; cin >> n;
    while(n--) {
        string st, en; cin >> st >> en;
        int s1 = st[1] - '0', s2 = st[0] - 'a' + 1;
        int t1 = en[1] - '0', t2 = en[0] - 'a' + 1;
        memset(matrix, 0, sizeof(matrix));
        cout << BFS(s1, s2, t1, t2) << endl;
    }
    return 0;
}