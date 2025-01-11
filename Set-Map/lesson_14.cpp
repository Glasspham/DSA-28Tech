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
    int a[n]; for(int &x : a) cin >> x;
    set<int> st;
    int f[n];
    for(int i = n - 1; i >= 0; --i) {
        st.insert(a[i]);
        f[i] = st.size();
    }
    int q; cin >> q;
    while(q--) {
        int l; cin >> l;
        cout << f[l] << endl;  
    }
    return 0;
}