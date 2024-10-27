#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m, color[1000005], ok = 1;
vector<int> adj[1000005];
void DFS(int u) {
    if(!ok) return;
    for(int v : adj[u]) {
        if(color[v] == 0) {
            color[v] = 3 - color[u];
            DFS(v);
        } else if(color[v] == color[u]){
            ok = 0;
            return;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    #ifndef GLASS
    freopen("../Text.inp", "r", stdin);
    freopen("../Text.out", "w", stdout);
    #endif
    cin >> n >> m;
    for(int i = 0; i < m; ++i) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i = 1; i <= n; ++i) {
        if(!color[i]) {
            color[i] = 1;
            DFS(i);
        }
    }
    if(ok) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}