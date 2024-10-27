#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int n, m, cnt;
vector<int> adj[1000005];
bool visited[1000005];
void DFS(int u) {
    visited[u] = true;
    ++cnt;
    for(int v : adj[u])
        if(!visited[v])
            DFS(v);
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
    int canh = 0;
    for(int i = 1; i <= n; ++i) {
        if(!visited[i]) {
            cnt = 0;
            DFS(i);
            canh += cnt * (cnt - 1) / 2;
        }
    }
    if(canh == m) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}