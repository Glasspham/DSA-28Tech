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
    set<int> st;
    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        st.insert(x);
    }
    int q; cin >> q;
    while(q--) {
        int x; cin >> x;
        if(st.find(x) != st.end())
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}