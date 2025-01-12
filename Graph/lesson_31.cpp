#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
vector<int> adj[1000005];
int res = 0;
int DFS(int u)
{
    int cnt = 1;
    for (int v : adj[u])
        cnt += DFS(v);
    res += cnt;
    return cnt;
}

void BFS(int u)
{
    queue<int> q;
    q.push(u);
    vector<int> cnt(n + 1, 1);
    while (!q.empty())
    {
        u = q.front();
        q.pop();
        for (int v : adj[u])
        {
            q.push(v);
            cnt[v] += cnt[u];
        }
        res += cnt[u];
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n - 1; ++i)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    BFS(1);
    cout << res;
    return 0;
}