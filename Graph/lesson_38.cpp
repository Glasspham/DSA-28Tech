#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m, d[1000005], res = 0;
vector<int> adj[1000005];
void DFS(int u, int lt) {
    int ok = 1; //! Xem tới lá chưa
    for(int v : adj[u]) {
        ok = 0;
        if(d[v] == 1 and lt + 1 <= m)
            DFS(v, lt + 1);
        else if(d[v] == 0)
            DFS(v, 0);
    }
    if(ok) res++; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    #ifndef GLASS
    freopen("../Text.inp", "r", stdin);
    freopen("../Text.out", "w", stdout);
    #endif
    cin >> n >> m;
    for(int i = 1; i <= n; ++i) cin >> d[i];
    for(int i = 0; i < n - 1; ++i) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
    }
    DFS(1, d[1]);
    cout << res;
    return 0;
}