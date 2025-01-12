#include <bits/stdc++.h>
using namespace std;
// https://cses.fi/problemset/task/1666
using ll = long long;
vector<int> adj[100005];
int n, m;
bool used[100005];
void DFS(int u)
{
    used[u] = true;
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
    int cnt = 0;
    vector<int> res;
    for (int i = 1; i <= n; ++i)
    {
        if (!used[i])
        {
            res.push_back(i);
            ++cnt;
            DFS(i);
        }
    }
    cout << cnt - 1 << endl;
    for (int i = 0; i < res.size() - 1; ++i)
        cout << res[i] << ' ' << res[i + 1] << endl;
    return 0;
}