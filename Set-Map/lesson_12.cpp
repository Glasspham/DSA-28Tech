#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef GLASS
    freopen("../Text.inp", "r", stdin);
    freopen("../Text.out", "w", stdout);
    #endif
    int n, m; cin >> n >> m;
    map<int,int> res;
    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        res[x] = 1;
    }
    for(int i = 0; i < m; ++i) {
        int x; cin >> x;
        if(res[x] == 0 or res[x] == 3)
            res[x] = 3;
        else if(res[x] == 1)
            res[x] = 2;
    }
    for(auto it : res)
        if(it.second == 1 or it.second == 3)
            cout << it.first << ' ';
    return 0;
}