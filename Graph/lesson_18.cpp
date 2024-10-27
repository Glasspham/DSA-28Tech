#include<bits/stdc++.h>
using namespace std;

using ll = long long;
vector<int>adj[1005];
bool used[1005];
int TPLT[1005], cnt = 0;

void DFS(int u) {
    used[u] = true;
    TPLT[u] = cnt;
    for(int v : adj[u])     
        if(!used[v])
            DFS(v);
}

void BFS(int u) {
    queue<int> q;
    q.push(u);
    used[u] = true;
    while(!q.empty()) {
        u = q.front(); q.pop();
        TPLT[u] = cnt;
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
    int n, m; cin >> n >> m;
    for(int i = 0; i < m ; ++i) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i = 1; i <= n; ++i) 
        sort(adj[i].begin(), adj[i].end());

    #if 0 // DFS
    for(int i = 1; i <= n; ++i) {
        if(!used[i]){
            ++cnt;
            DFS(i);
        }
    }
    #endif

    #if 1 // BFS
    for(int i = 1; i <= n; ++i) {
        if(!used[i]){
            ++cnt;
            BFS(i);
        }
    }
    #endif
    
    int q; cin >> q;
    while(q--) {
        int s, t; cin >> s >> t;
        if(TPLT[s] == TPLT[t]) cout << 1 << endl;
        else cout << -1 << endl;
    }
    return 0;
}