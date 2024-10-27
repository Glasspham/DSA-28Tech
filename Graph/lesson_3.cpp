#include<bits/stdc++.h>
using namespace std;

using ll = long long;
vector<int> adj[1005];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m; cin >> n >> m;
    for(int i = 1; i <= m; ++i){
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
    }
    for(int i = 1; i <= n; ++i){
        sort(adj[i].begin(), adj[i].end());
        cout << i << " : ";
        for(int x : adj[i])
            cout << x << ' ';
        cout << endl; 
    }
    return 0;
}