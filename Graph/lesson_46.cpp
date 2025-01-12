#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define pip pair<int, pair<int, int>>
int n, m, a[1005][1005], d[1005][1005];
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

void Dijkstra()
{
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            d[i][j] = 1e9;
    d[1][1] = a[1][1];
    priority_queue<pip, vector<pip>, greater<pip>> pq;
    pq.push({a[1][1], {1, 1}});
    while (!pq.empty())
    {
        auto it = pq.top();
        pq.pop();
        int i = it.second.first, j = it.second.second;
        int w = it.first;
        if (w > d[i][j])
            continue;
        for (int l = 0; l < 4; ++l)
        {
            int i1 = i + dx[l], j1 = j + dy[l];
            if (d[i1][j1] > d[i][j] + a[i1][j1])
            {
                d[i1][j1] = d[i][j] + a[i1][j1];
                pq.push({d[i1][j1], {i1, j1}});
            }
        }
    }
    cout << d[n][m];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            cin >> a[i][j];
    Dijkstra();
    return 0;
}