#include<bits/stdc++.h>
using namespace std;

using ll = long long;
vector<int> adj[1005];
bool visited[1005];
int parent[1005];

void DFS(int u) {
    visited[u] = true;
    for(int v : adj[u]) 
        if(!visited[v]){
            parent[v] = u;
            DFS(v);
        }
}

void BFS(int u) {
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()) {
        u = q.front(); q.pop();
        for(int v : adj[u]) {
            q.push(v);
            visited[v] = true;
            parent[v] = u;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, s, t; cin >> n >> m >> s >> t;
    for(int i = 1; i <= m; ++i) {
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i = 1; i <= n; ++i) 
        sort(adj[i].begin(), adj[i].end());

    DFS(s);
    BFS(s);
    if(visited[t]) {
        vector<int> path;
        while(t != s) {
            path.push_back(t);
            t = parent[t];
        }
        path.push_back(t);
        reverse(path.begin(), path.end());
        for(int it : path) cout << it << ' ';
    } else cout << -1; 
    return 0;
}