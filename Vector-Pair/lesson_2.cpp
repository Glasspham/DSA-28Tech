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
    int n; cin >> n;
    vector<int> v(n);
    for(int &x : v) cin >> x;
    int m; cin >> m;
    for(int i = 0; i < m; ++i) {
        int sl, idx; cin >> sl >> idx;
        if(sl == 1) {
            int num; cin >> num;
            if(idx <= n and idx >= 0)
                v.insert(v.begin() + idx, num);
        } else if(!v.empty())
            v.erase(v.begin() + idx);
    }
    if(!v.empty())
        for(int x : v) cout << x << ' ';
    else cout << "EMPTY\n"; 
    return 0;
}