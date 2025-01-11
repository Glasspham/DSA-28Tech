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
    set<int> st;
    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        st.insert(x);
    }
    for(int i = 0; i < m; ++i) {
        int x; cin >> x;
        if(st.find(x) != st.end())
            st.erase(x);
    }
    for(auto it : st) cout << it << ' ';
    return 0;
}