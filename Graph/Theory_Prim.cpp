#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n, m;
bool taken[1000001];
vector<pair<int,int>> adj[1000001];

void Input() {
    cin >> n >> m;
    for(int i = 0; i < m; ++i) {
        int x, y, w; cin >> x >> y >> w;
        adj[x].push_back({y,w});
        adj[y].push_back({x,w});
    }
}

void Prim(int s) {
    taken[s] = true;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
    for(auto it : adj[s]) {
        int t = it.first;
        if(!taken[t])
            q.push({it.second, t});
    }
    ll d = 0, cnt = 0;
    while(!q.empty()) {
        pair<int,int> e = q.top(); q.pop();
        int u = e.second, w = e.first;
        if(!taken[u]) {
            ++cnt;
            d += w;
            taken[u] = true;
            for(auto it : adj[u])
                if(!taken[it.first]) 
                    q.push({it.second,it.first});
        }
    }
    if(cnt == n - 1) cout << d;
    else cout << "IMPOSSIBLE";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef GLASS
    freopen("../Text.inp", "r", stdin);
    freopen("../Text.out", "w", stdout);
    #endif
    Input();
    Prim(1);
    return 0;
}