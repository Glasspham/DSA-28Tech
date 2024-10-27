#include<bits/stdc++.h>
using namespace std;

using ll = long long;

#if 1 // Dùng set làm danh sách kề
int n, m;
set<int> adj[1005];
bool used[1005];
vector<pair<int,int>> edge;

void DFS(int u) {
    used[u] = true;
    for(int v : adj[u])
        if(!used[v])
            DFS(v);
}

int tplt() {
    int ans = 0;
    for(int i = 1; i <= n; ++i) {
        if(!used[i]) {
            ++ans;
            DFS(i);
        }
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for(int i = 0; i < m; ++i) {
        int u, v; cin >> u >> v;
        edge.push_back({u, v});
        adj[u].insert(v);
        adj[v].insert(u);
    }
    int cc = tplt(), dem = 0;
    for(auto it : edge) {
        int x = it.first, y = it.second;
        adj[x].erase(y);
        adj[y].erase(x);
        memset(used, false, sizeof(used));
        if(cc < tplt()) ++dem;
        adj[x].insert(y);
        adj[y].insert(x);
    }
    cout << dem;
    return 0;
}
#endif

#if 0 // Dùng vector làm danh sách kề
int n, m;
vector<int> adj[1005];
bool used[1005];
vector<pair<int,int>> edge;

void DFS(int u, int s, int t) {
    used[u] = true;
    for(int v : adj[u]) {
        if((v == s and u == t) or (v == t and u == s))
            continue;
        if(!used[v])
            DFS(v, s, t);
    }
}

int tplt(int s, int t) {
    int ans = 0;
    for(int i = 1; i <= n; ++i) {
        if(!used[i]) {
            ++ans;
            DFS(i, s, t);
        }
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for(int i = 0; i < m; ++i) {
        int u, v; cin >> u >> v;
        edge.push_back({u, v});
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int cc = tplt(0, 0), dem = 0;
    for(auto it : edge) {
        int x = it.first, y = it.second;
        memset(used, false, sizeof(used));
        if(cc < tplt(x, y)) ++dem;
    }
    cout << dem;
    return 0;
}
#endif