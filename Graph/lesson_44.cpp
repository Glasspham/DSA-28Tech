#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n, m, st;
vector<pair<int,int>> adj[1000001];

void Input() {
    cin >> n >> m >> st;
    for(int i = 0; i < m; ++i) {
        int x, y, w; cin >> x >> y >> w;
        adj[x].push_back({y, w});
        adj[y].push_back({x, w});
    }
}

void Dijkstra(int s) {
    vector<int> d(n + 1, 1e9);
    d[s] = 0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
    q.push({0,s});
    while(!q.empty()) {
        pair<int,int> top = q.top(); q.pop();
        int u = top.second, distance = top.first;
        if(distance > d[u]) continue;
        for(auto it : adj[u]) {
            int v = it.first, w = it.second;
            if(d[v] > d[u] + w) {
                d[v] = d[u] + w;
                q.push({d[v], v});
            }
        }
    }
    for(int i = 1; i <= n; ++i) cout << d[i] << ' ';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef GLASS
    freopen("../Text.inp", "r", stdin);
    freopen("../Text.out", "w", stdout);
    #endif
    Input();
    Dijkstra(st);
    return 0;
}