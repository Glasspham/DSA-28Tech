#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#if 0 // DFS
vector<int> ds[1005];
bool visited[1005];
void DFS(int u){
    visited[u] = true;
    for(int v : ds[u])
        if(!visited[v])
            DFS(v);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m; cin >> n >> m;
    for(int i = 0; i < m; ++i){
        int x, y; cin >> x >> y;
        ds[x].push_back(y);
        ds[y].push_back(x);
    }
    int dem = 0;
    for(int i = 1; i <= n; ++i){
        if(!visited[i]){
            DFS(i);
            dem++;
        }
    }
    cout << dem;
    return 0;
}
#endif

#if 1 // DSU
int n, m, parent[1000001], sz[1000001];
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
    if (sz[u] < sz[v])
        swap(u, v);
    sz[u] += sz[v];
    parent[v] = u;
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
        parent[i] = i;
    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        Union(u, v);
    }
    int cnt = 0;
    for (int i = 1; i <= n; ++i)
        if (i == parent[i])
            ++cnt;
    cout << cnt;
    return 0;
}
#endif