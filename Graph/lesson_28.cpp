#include<bits/stdc++.h>
using namespace std;

using ll = long long;
vector<int> adj[1005];
int n, m, x, bac[1005], used[1005];
void DFS(int u) {
    if(bac[u] > bac[x] or (bac[u] == bac[x] and u < x))
        x = u;
    used[u] = 1;
    for(int v : adj[u])
        if(!used[v])
            DFS(v);
}

int parent[1005];
int Find(int u) {
    if(u == parent[u]) return u;
    return parent[u] = Find(parent[u]);
}

void Union(int u, int v) {
    u = Find(u);
    v = Find(v);
    if(u == v) return;
    else {
        if(bac[u] > bac[v] or bac[u] == bac[u] and u < v)
            parent[v] = u;
        else parent[u]= v;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    #ifndef GLASS
    freopen("../Text.inp", "r", stdin);
    freopen("../Text.out", "w", stdout);
    #endif
    cin >> n >> m;
    #if 0 // DFS
    for(int i = 0; i < m; ++i) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        bac[u]++, bac[v]++;
    }
    vector<int> res;
    for(int i = 1; i <= n; ++i) {
        if(!used[i]) {
            x = i;
            DFS(i);
            res.push_back(x);
        }
    }
    sort(res.begin(), res.end());
    for(int it : res) cout << it << ' ';
    #endif

    #if 1 // DSU
    for(int i = 1; i <= n; ++i)
        parent[i] = i;
    vector<pair<int,int>> edges;
    for(int i = 0; i < m; ++i) {
        int u, v; cin >> u >> v;
        edges.push_back({u,v});
        bac[u]++, bac[v]++;
    }
    for(auto e : edges) Union(e.first, e.second);
    for(int i = 1; i <= n; ++i)
        if(i == parent[i])
            cout << i << ' ';
    #endif 
    return 0;
}