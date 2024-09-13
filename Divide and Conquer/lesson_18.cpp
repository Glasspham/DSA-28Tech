#include<bits/stdc++.h>
using namespace std;

using ll = long long;
vector<ll> a;
void PosCenter(ll n){
    ll mu = 1;
    while(n / 2 > 0){
        mu *= 2;
        a.push_back(mu);
        n /= 2;
    }
}

ll val(ll k, ll n, ll pos){
    if(k % 2 == 1) return 1;
    if(k < a[pos]) return val(k, n / 2, pos - 1);
    if(k == a[pos]) return n % 2;
    return val(2 * a[pos] - k, n / 2, pos - 1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, l, r, res = 0; cin >> n >> l >> r;
    PosCenter(n);
    for(ll i = l; i <= r; ++i)
        res += val(i, n, a.size() - 1);
    cout << res;
    return 0;
}