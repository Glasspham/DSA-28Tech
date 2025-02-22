#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7;

ll powerBin(ll a, ll b) {
    if(b == 1) return a % mod;
    ll x = powerBin(a, b / 2);
    return (b % 2 == 0) ? (x * x) % mod : ((x * x) % mod * a) % mod;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, k; cin >> n >> k;
    cout << powerBin(n, k);
    return 0;
}