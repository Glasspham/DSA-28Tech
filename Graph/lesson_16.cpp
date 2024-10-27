#include<bits/stdc++.h>
using namespace std;

using ll = long long;
vector<int>adj[1005];
bool used[1005];
int parent[1005];
void DFS(int u) {
    used[u] = true;
    for(int v : adj[u]) {
        if(!used[v]) {
            parent[v] = u;
            DFS(v);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, s, t; cin >> n >> m >> s >> t;
    for(int i = 0; i < m; ++i) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
    }
    for(int i = 1; i <= n; ++i)
        sort(adj[i].begin(), adj[i].end());
    DFS(s);
    if(used[t]) {
        vector<int>path;
        while(s != t) {
            path.push_back(t);
            t = path[t];
        }
        path.push_back(t);
        for(int it : path) cout << it << ' ';
    } else cout << -1;
    return 0;
}