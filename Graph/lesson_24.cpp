#include<bits/stdc++.h>
using namespace std;

using ll = long long;
/**
 * !Theory Tree
 * Cây có N đỉnh:
 * +Không có chu trình
 * +Giữa 2 đỉnh bất kì luôn có 1 đường đi duy nhất
 * +Số cạnh = N - 1
 * +Liên thông
 */

/**
 * +Số cạnh = N - 1
 * +Liên thông
 */
#if 0 
vector<int>adj[1005];
int used[1005];
int cnt = 0, n, m;
void DSF(int u) {
    ++cnt;
    used[u] = true;
    for(int v : adj[u]) 
        if(!used[v])
            DSF(v);
}

int check() {
    DSF(1);
    if(cnt == n) return 1;
    return 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    #ifndef GLASS
    freopen("../Text.inp", "r", stdin);
    freopen("../Text.out", "w", stdout);
    #endif
    cin >> n >> m;
    for(int i = 0; i < m; ++i){
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    if(m == n - 1 and check()) cout << 1;
    else cout << 0;
    return 0;
}
#endif

/**
 * +Số cạnh = N - 1
 * +Không có chu trình
 */
#if 1
vector<int>adj[1005];
int used[1005], parent[1005];
int ok = 0, n, m;
void DSF(int u) {
    if(ok) return;
    used[u] = true;
    for(int v : adj[u]) {
        if(!used[v]) {
            parent[v] = u; 
            DSF(v);
        }
        else if(used[v] and v != parent[u]) {
            ok = 1;
            return;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    #ifndef GLASS
    freopen("../Text.inp", "r", stdin);
    freopen("../Text.out", "w", stdout);
    #endif
    cin >> n >> m;
    for(int i = 0; i < m; ++i){
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    if(m == n - 1 and ok) cout << 1;
    else cout << 0;
    return 0;
}
#endif