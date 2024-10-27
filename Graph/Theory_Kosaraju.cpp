#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int n, m;
vector<int> adj[1005], t_adj[1005];
bool visited[1005];
stack<int> st;

void Input() {
    cin >> n >> m;
    for(int i = 0; i < m; ++i) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        t_adj[v].push_back(u);
    }
    memset(visited, false, sizeof(visited));
}

void DFS1(int u) {
    visited[u] = true;
    for(int v : adj[u])
        if(!visited[v])
            DFS1(v);
    st.push(u);
}

void DFS2(int u) {
    cout << u << ' ';
    visited[u] = true;
    for(int v : t_adj[u])
        if(!visited[v])
            DFS2(v);
}

void Kosaraju() {
    for(int i = 1; i <= n; ++i)
        if(!visited[i])
            DFS1(i);
    memset(visited, false, sizeof(visited));
    int scc = 0;
    while(!st.empty()) {
        int top = st.top(); st.pop();
        if(!visited[top]) {
            ++scc;
            DFS2(top);
            cout << endl;
        }
    }
    cout << scc;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    #ifndef GLASS
    freopen("../Text.inp", "r", stdin);
    freopen("../Text.out", "w", stdout);
    #endif
    Input();
    Kosaraju();
    return 0;
}