#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m, color[1000005];
vector<int> adj[1000005];
bool DFS(int u)
{
    for (int v : adj[u])
    {
        if (color[v] == 0)
        {
            color[v] = 3 - color[u];
            if (!DFS(v))
                return false;
        }
        else if (color[v] == color[u])
            return false;
    }
    return true;
}

bool BFS(int u)
{
    queue<int> q;
    q.push(u);
    color[u] = 1;
    while (!q.empty())
    {
        u = q.front();
        q.pop();
        for (int v : adj[u])
        {
            if (color[v] == 0)
                color[v] = 3 - color[u];
            else if (color[v] == color[u])
                return false;
            q.push(v);
        }
    }
    return true;
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
    bool ok = true;
#if 1 // DFS
    for (int i = 1; i <= n; ++i)
    {
        if (!color[i])
        {
            color[i] == 1;
            if (!DFS(i))
            {
                ok = false;
                break;
            }
        }
    }
    for (int i = 1; i <= n; ++i)
        cout << i << ' ' << color[i] << endl;
#endif
#if 1 // BFS
    for (int i = 1; i <= n; ++i)
    {
        if (!color[i])
        {
            if (!BFS(i))
            {
                ok = false;
                break;
            }
        }
    }
#endif
    if (ok)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}