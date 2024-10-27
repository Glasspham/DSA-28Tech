#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int n, parent[1000001], sz[1000001];
void Init() {
    cin >> n;
    for(int i = 1; i <= n; ++i) {
        parent[i] = i;
        sz[i] = 1;
    }
}

int Find(int u) {
    if(u == parent[u]) return u;
    else return parent[u] = Find(parent[u]);
}

bool Union(int u, int v) {
    u = Find(u);
    v = Find(v);
    if(u == v) return false;
    if(sz[u] < sz[v]) swap(u, v);
    sz[u] += sz[v];
    parent[v] = u;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    #ifndef GLASS
    freopen("../Text.inp", "r", stdin);
    freopen("../Text.out", "w", stdout);
    #endif
    Init();
    cout << Union(6, 7) << endl;
    cout << Union(5, 6) << endl;
    for(int i = 1; i <= n; ++i)
        cout << i << ' ' << parent[i] << endl;
    return 0;
}