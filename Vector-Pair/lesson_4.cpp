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
    int l, r; cin >> l >> r;
    for(auto it = v.begin() + l; it != v.end() - (n - r) + 1; ++it)
        cout << *it << ' ';
    cout << endl;
    for(auto it = v.end() - (n - r); it >= v.begin() + l; --it)
        cout << *it << ' ';
    return 0;
}