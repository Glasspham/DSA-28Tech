#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int n, m, d[1000005];
vector<int> adj[1000005];
bool visited[1000005];
void DFS(int u)
{
    d[u]++;
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
        d[u]++;
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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> k >> n >> m;
    int a[k];
    for (int &x : a)
        cin >> x;
    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    for (int x : a)
    {
        memset(visited, false, sizeof(visited));
        BFS(x);
    }
    int cnt = 0;
    for (int i = 1; i <= n; ++i)
        if (d[i] == k)
            ++cnt;
    cout << cnt;
    return 0;
}