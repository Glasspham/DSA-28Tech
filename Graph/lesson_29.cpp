#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int n, s, t, u, v, matrix[1005][1005];
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int BFS()
{
    queue<pair<pair<int, int>, int>> q;
    q.push({{s, t}, 0});
    matrix[s][t] = 0;
    while (!q.empty())
    {
        auto it = q.front();
        q.pop();
        int i = it.first.first, j = it.first.second, d = it.second;
        if (i == u and j == v)
            return d;
        for (int l = 0; l < 8; ++l)
        {
            s = i + dx[l], t = j + dy[l];
            if (s <= n and s >= 1 and t <= n and t >= 1 and matrix[s][t])
            {
                q.push({{s, t}, d + 1});
                matrix[s][t] = 0;
            }
        }
    }
    return -1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> s >> t >> u >> v;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            cin >> matrix[i][j];
    cout << BFS();
    return 0;
}