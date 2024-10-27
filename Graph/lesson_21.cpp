#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int n, m;
vector<int> adj[1005];
int parent[1005];
bool visited[1005];

bool DFS(int u) {
    visited[u] = true;
    for(int v : adj[u]) {
        if(!visited[v]) {
            parent[v] = u;
            if(DFS(v))
                return true;
        } else if(v != parent[u]) 
            return true;
    } return false;
}

bool BFS(int u) {
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()) {
        u = q.front(); q.pop();
        for(int v : adj[u]) {
            if(!visited[v]) {
                q.push(v);
                visited[v] = true;
                parent[v] = u;
            } else if(v != parent[u])
                return true;
        }
    } return false;
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

    #if 1 // DFS
    bool f = true;
    for(int i = 1; i <= n; ++i) {
        if(!visited[i]) {
            if(DFS(i)) {
                cout << 1;
                f = false;
                break;
            }
        }
    } if(f) cout << 0;
    #endif

    #if 0 // BFS
    bool f = true;
    for(int i = 1; i <= n; ++i) {
        if(!visited[i]) {
            if(BFS(i)) {
                cout << 1;
                f = false;
                break;
            }
        }
    } if(f) cout << 0;
    #endif

    #if 0 // DFU

    #endif
    return 0;
}