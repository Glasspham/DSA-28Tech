#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int n; 
vector<int> adj[1005];
int bac[1005];

void DFS(int u) {
    for(int v : adj[u]) {
        bac[v] = bac[u] + 1;
        DFS(v);
    }
}

void BFS(int u) {
    queue<int>q;
    q.push(u);
    while(!q.empty()) {
        u = q.front(); q.pop();
        for(int v : adj[u]) {
            bac[v] = bac[u] + 1;
            q.push(v);
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
    cin >> n;
    int u, v;
    while(cin >> u >> v) adj[u].push_back(v);
    BFS(1);
    for(int i = 1; i <= n; ++i)
        cout << bac[i] << ' ';
    return 0;
}