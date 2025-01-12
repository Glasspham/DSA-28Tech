#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int n, m;
char matrix[1005][1005];
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

int BFS(int x, int y)
{
    queue<pair<int, int>> q;
    q.push({x, y});
    matrix[x][y] = '#';
    int cnt = 0;
    while (!q.empty())
    {
        auto it = q.front();
        q.pop();
        ++cnt;
        for (int i = 0; i < 4; ++i)
        {
            x = it.first + dx[i], y = it.second + dy[i];
            if (x >= 1 and x <= n and y >= 1 and y <= m and matrix[x][y] == '.')
            {
                q.push({x, y});
                matrix[x][y] = '#';
            }
        }
    }
    return cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            cin >> matrix[i][j];
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            if (matrix[i][j] == '.')
                cout << BFS(i, j) << ' ';
    return 0;
}