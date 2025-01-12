#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int n, m;
vector<int> adj[1005];

int color[1005];
bool DFS(int u)
{
    color[u] = 1;
    for (int v : adj[u])
        if (color[v] == 0)
        {
            if (DFS(v))
                return true;
        }
        else if (color[v] == 1)
            return true;
    color[u] = 2;
    return false;
}

int degree[1005];
bool BFS()
{
    queue<int> q;
    for (int i = 1; i <= n; ++i)
        if (!degree[i])
            q.push(i);
    int cnt = 0;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        ++cnt;
        for (int v : adj[u])
        {
            --degree[v];
            if (!degree[v])
                q.push(v);
        }
    }
    return cnt != n;
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
        degree[v]++;
    }

#if 1 // DFS
    bool f = true;
    for (int i = 1; i <= n; ++i)
    {
        if (color[i] == 0)
        {
            if (DFS(i))
            {
                cout << 1;
                f = false;
                break;
            }
        }
    }
    if (f)
        cout << 0;
#endif

#if 1 // BFS
    cout << BFS();
#endif
    return 0;
}