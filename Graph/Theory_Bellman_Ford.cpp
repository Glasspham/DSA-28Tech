#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 1e9

#if 0 // Danh sách cạnh
struct edge {
    int x, y, w;
};
int n, m, d[1000005], st;
vector<edge> E;

void Input() {
    cin >> n >> m >> st;
    for(int i = 0; i < m; ++i) {
        int x, y, w; cin >> x >> y >> w;
        E.push_back((edge){x, y, w});
    }
}

void BellmanFord(int s) {
    fill(d + 1, d + n + 1, INF);
    d[s] = 0;
    for(int i = 1; i <= n - 1; ++i) {
        for(edge e : E) {
            int u = e.x, v = e.y, w = e.w;
            if(d[u] < INF) 
                d[v] = min(d[v], d[u] + w);
        }
    }
    for(int i = 1; i <= n; ++i)
        cout << d[i] << ' ';
}

bool check(int s) {
    d[s] = 0;
    for(int i = 1; i <= n - 1; ++i) {
        for(edge e : E) {
            int u = e.x, v = e.y, w = e.w;
            if(d[u] < INF) 
                d[v] = min(d[v], d[u] + w);
        }
    }
    bool ok = false;
    for(edge e : E) {
        int u = e.x, v = e.y, w = e.w;
        if(d[u] < INF) {
            if(d[v] > d[u] + w) {
                ok = true;
                break;
            }
        }
    }
    return ok;
}

bool negativeCycle() {
    fill(d + 1, d + n + 1, INF);
    bool res = false;
    for(int i = 1; i <= n; ++i) {
        if(d[i] == INF) {
            if(check(i)) {
                res = true;
                break;
            }
        }
    }
    return res;
}
#endif

#if 1 // Danh sách kề
int n, m, s, d[1000005];
vector<pair<int,int>> adj[1000005];

void Input() {
    cin >> n >> m;
    for(int i = 0; i < m; ++i) {
        int x, y, w; cin >> x >> y >> w;
        adj[x].push_back({w, y});
        adj[y].push_back({w, x});
    }
}

void BellmanFord(int s) {
    fill(d + 1, d + n + 1, INF);
    d[s] = 0;
    for(int i = 0; i < n - 1; ++i) {
        for(int u = 1; u <= n; ++u) {
            for(auto it : adj[u]) {
                int v = it.second, w = it.first;
                d[v] = min(d[v], d[u] + w);
            }
        }
    }
    for(int i = 1; i <= n; ++i)
        cout << d[i] << ' ';
}
#endif

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef GLASS
    freopen("../Text.inp", "r", stdin);
    freopen("../Text.out", "w", stdout);
    #endif
    Input();
    BellmanFord(1);
    return 0;
}