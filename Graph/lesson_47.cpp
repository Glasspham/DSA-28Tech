#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int n, m, parent[1000001];
vector<int> adj[1005];
bool visited[1005];

void DFS(int u)
{
    visited[u] = true;
    for (int v : adj[u])
        if (!visited[v])
            DFS(v);
}

void BFS(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while (!q.empty())
    {
        u = q.front();
        q.pop();
        for (int v : adj[u])
        {
            if (!visited[v])
            {
                q.push(v);
                visited[v] = true;
            }
        }
    }
}

int Find(int u)
{
    if (u == parent[u])
        return u;
    else
        return parent[u] = Find(parent[u]);
}

bool Union(int u, int v)
{
    u = Find(u);
    v = Find(v);
    if (u == v)
        return false;
    if (u < v)
        parent[v] = u;
    else
        parent[u] = v;
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;

#if 1 // DFS and BFS
    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

#if 1 // DFS
    DFS(1);
#endif

#if 1 // BFS
    BFS(1);
#endif

    bool f = true;
    for (int i = 1; i <= n; ++i)
        if (!visited[i])
        {
            f = false;
            cout << i << endl;
        }
    if (f)
        cout << 0;
#endif

#if 1 // DSU
    for (int i = 1; i <= n; ++i)
        parent[i] = i;
    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        Union(u, v);
    }
    bool f = true;
    for (int i = 2; i <= n; ++i)
    {
        if (Find(1) != Find(i))
        {
            f = false;
            cout << i << endl;
        }
    }
    if (f)
        cout << 0;
#endif

    return 0;
}