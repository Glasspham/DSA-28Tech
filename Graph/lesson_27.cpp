#include <bits/stdc++.h>
using namespace std;

using ll = long long;
vector<int> adj[1005];
int used[1005], n, m, cnt;
void DFS(int u)
{
    ++cnt;
    used[u] = 1;
    for (int v : adj[u])
        if (!used[v])
            DFS(v);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int res = 1;
    for (int i = 1; i <= n; ++i)
    {
        if (!used[i])
        {
            cnt = 0;
            DFS(i);
            res = max(res, cnt);
        }
    }
    cout << res;
    return 0;
}