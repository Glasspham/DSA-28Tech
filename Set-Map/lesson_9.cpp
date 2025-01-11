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
    for(int i = 0; i < n + m; ++i) {
        int x; cin >> x;
        st.insert(x);
    }
    for(auto it = st.rbegin(); it != st.rend(); ++it) 
        cout << *it << ' ';
    return 0;
}