#include<bits/stdc++.h>
using namespace std;

using ll = long long;
/*
! Định nghĩa Topo sort
* Cha đứng trước con
! DFS sẽ định nghĩa lại Topo sort
* Cha có nhiều con
* Tất cả con xong thì cha xong
* Theo thứ tự duyệt xong
* Đỉnh u duyệt xong cho vào stack

! BFS sẽ định nghĩa lại Topo sort
* Xóa dần đỉnh
 */

#if 0 //! DFS
int n, m;
vector<int> adj[1005];
bool visited[1005];
stack<int> st;
void DFS(int u) {
    visited[u] = true;
    for(int v : adj[u]) 
        if(!visited[v])
            DFS(v);
    st.push(u);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    #ifndef GLASS
    freopen("../Text.inp", "r", stdin);
    freopen("../Text.out", "w", stdout);
    #endif
    cin >> n >> m;
    for(int i = 0; i < m; ++i) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
    }
    memset(visited, false, sizeof(visited));
    for(int i = 1; i <= n; ++i)
        if(!visited[i])
            DFS(i);
    while(!st.empty()) {
        cout << st.top() << ' ';
        st.pop();
    }
    return 0;
}
#endif

#if 1 //! BFS
int n, m, bbv[1005];
vector<int> adj[1005];
stack<int> st;

void Kahn() {
    queue<int> q;
    for(int i = 1; i <= n; ++i)
        if(bbv[i] == 0)
            q.push(i);
    vector<int>topo;
    while(!q.empty()) {
        int u = q.front(); q.pop();
        topo.push_back(u);
        for(int v : adj[u]) {   
            bbv[v]--;
            if(bbv[v] == 0) q.push(v);
        }
    }
    if(topo.size() != n) cout << "Co chu trinh\n";
    else {
        for(int x : topo) cout << x << ' ';
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
    for(int i = 0; i < m; ++i) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        bbv[v]++;
    }
    Kahn();
    return 0;
}
#endif