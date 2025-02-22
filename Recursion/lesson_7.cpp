#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll C(ll n, ll k) {
    if(k == 0 || k == n) return 1;
    if(k == 1) return n;
    return C(n - 1, k - 1) + C(n - 1, k);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, k; cin >> n >> k;
    cout << C(n, k);
    return 0;
}