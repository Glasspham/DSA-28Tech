#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll GCD(ll a, ll b) {
    return (!b) ? a : GCD(b, a % b);
}

ll LCM(ll a, ll b) {
    return (a * b) / GCD(a, b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, k; cin >> n >> k;
    cout << GCD(n, k) << ' ' << LCM(n, k);
    return 0;
}