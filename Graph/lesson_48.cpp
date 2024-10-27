#include<bits/stdc++.h>
using namespace std;
#define ll long long
int res, d[1005], p[1005];
void DFS(int u) {
    d[u]++;
    if(d[u] == 2)
        res = u;
    else DFS(p[u]);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef GLASS
    freopen("../Text.inp", "r", stdin);
    freopen("../Text.out", "w", stdout);
    #endif
    int n; cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> p[i];
    for(int i = 1; i <= n; ++i) {
        memset(d, 0, sizeof(d));
        DFS(i);
        cout << res << ' ';
    }
    return 0;
}