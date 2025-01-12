#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int n, m, timer = 0, disc[1005], low[1005];
vector<int> adj[1005];
bool visited[1005];

void Input()
{
    cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    memset(visited, false, sizeof(visited));
}

void DFS(int u)
{
    visited[u] = true;
    disc[u] = low[u] = ++timer;
    for (int v : adj[u])
    {
        if (!visited[v])
        {
            DFS(v);
            low[u] = min(low[u], low[v]);
        }
        else
            low[u] = min(low[u], disc[v]);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Input();
    for (int i = 1; i <= n; ++i)
        if (!visited[i])
            DFS(i);
    for (int i = 1; i <= n; ++i)
        cout << disc[i] << ' ' << low[i] << endl;
    return 0;
}