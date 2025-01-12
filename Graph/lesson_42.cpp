#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m, size_max = 0, parent[10005], sz[10005];
int Find(int u)
{
    if (u == parent[u])
        return u;
    return parent[u] = Find(parent[u]);
}

bool Union(int u, int v)
{
    u = Find(u);
    v = Find(v);
    if (v == u)
        return false;
    if (sz[u] < sz[v])
        swap(u, v);
    sz[u] += sz[v];
    parent[v] = u;
    size_max = max(size_max, sz[u]);
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
    {
        parent[i] = i;
        sz[i] = 1;
    }
    int cnt = n;
    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        if (Union(u, v))
            --cnt;
        cout << cnt << ' ' << size_max << endl;
    }

    return 0;
}