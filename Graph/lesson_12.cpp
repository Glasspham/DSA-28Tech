#include<bits/stdc++.h>
using namespace std;

using ll = long long;
vector<int> adj[1005];
bool used[1005];

void BFS(int u) {
    queue<int> q;
    q.push(u);
    used[u] = true;
    while(!q.empty()) {
        u = q.front(); q.pop();
        cout << u << ' ';
        for(int v : adj[u]) {
            if(!used[v]) {
                q.push(v);
                used[v] = true;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, s; cin >> n >> m >> s;
    for(int i = 0; i < m; ++i) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
    }
    for(int i = 1; i <= n; ++i)
        sort(adj[i].begin(), adj[i].end());
    BFS(s);
    return 0;
}
