#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, cnt = 0; cin >> n >> m;
    vector<int>adj[1005];
    for(int i = 0; i < m; ++i) {    
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        if(adj[u].size() == 2) ++cnt;
        if(adj[v].size() == 2) ++cnt;
    }
    cout << cnt;
    return 0;
}