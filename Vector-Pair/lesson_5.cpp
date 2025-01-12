#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    vector<int> v(n);
    for(int &x : v) cin >> x;
    int l, r; cin >> l >> r;
    reverse(v.begin(), v.end());
    for(auto x : v) cout << x << ' ';
    cout << endl;
    reverse(v.begin() + l, v.begin() + r + 1);
    for(auto x : v) cout << x << ' ';
    return 0;
}