#include<bits/stdc++.h>
using namespace std;

using ll = long long;
vector<int> adj[1005];
bool used[1005];
int parent[1005];

void BFS(int u) {
    queue<int> q;
    q.push(u);
    used[u] = true;
    while(!q.empty()) {
        u = q.front(); q.pop();
        for(int v : adj[u]) {
            if(!used[v]) {
                q.push(v);
                used[v] = true;
                parent[v] = u;
            }
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
        adj[v].push_back(u);
    }
    for(int i = 1; i <= n; ++i)
        sort(adj[i].begin(), adj[i].end());
    BFS(s);
    if(used[t]) {
        vector<int> path;
        while(t != s) {
            path.push_back(t);
            t = parent[t];
        }
        path.push_back(t);
        reverse(path.begin(), path.end());
        for(int it : path) cout << it << ' ';
    } else cout << -1 << endl;
    return 0;
}