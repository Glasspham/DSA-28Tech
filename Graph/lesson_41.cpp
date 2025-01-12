#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct edge
{
    int x, y, w;
};
int n, m, parent[1000005], sz[1000005];
vector<edge> adj;

void Input()
{
    cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        int x, y, w;
        cin >> x >> y >> w;
        adj.push_back((edge){x, y, w});
    }
    for (int i = 1; i <= n; ++i)
    {
        parent[i] = i;
        sz[i] = 1;
    }
}

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
    if (u == v)
        return false;
    if (sz[u] > sz[v])
    {
        parent[v] = u;
        sz[u] += sz[v];
    }
    else
    {
        parent[u] = v;
        sz[v] += sz[u];
    }
    return true;
}

void Kruskal()
{
    sort(adj.begin(), adj.end(), [](edge a, edge b) -> bool
         { return a.w < b.w; });
    int d = 0;
    vector<edge> MST;
    for (int i = 0; i < m; ++i)
    {
        if (MST.size() == n - 1)
            break;
        edge e = adj[i];
        if (Union(e.x, e.y))
        {
            MST.push_back(e);
            d += e.w;
        }
    }
    if (MST.size() != n - 1)
        cout << "IMPOSSIBLE";
    else
        cout << d;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Input();
    Kruskal();
    return 0;
}