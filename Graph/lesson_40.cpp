#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m, st;
vector<int> adj[1000005];
bool visited[1000005];
void BFS(int u) {
    visited[u] = true;
    queue<int>q;
    q.push(u);
    while(!q.empty()) {
        u = q.front(); q.pop();
        for(int v : adj[u]) {
            if(!visited[v]) {
                cout << u << "->" << v << endl;
                q.push(v);
                visited[v] = true;
            }
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
    cin >> n >> m >> st;
    for(int i = 0; i < m; ++i) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i = 1; i <= n; ++i) 
        sort(adj[i].begin(), adj[i].end());
    BFS(st);
    return 0;
}