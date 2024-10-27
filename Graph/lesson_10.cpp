#include<bits/stdc++.h>
using namespace std;

using ll = long long;
vector<int> adj[1005];
bool visited[1005];
void DFS(int u) {
    cout << u << ' ';
    visited[u] = true;
    for(auto v : adj[u])
        if(!visited[v])
            DFS(v);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, s; cin >> n >> m >> s;
    for(int i = 0; i < m; ++i) {
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
    }
    for(int i = 1; i <= n; ++i)
        sort(adj[i].begin(), adj[i].end());;
    DFS(s);
    return 0;
}