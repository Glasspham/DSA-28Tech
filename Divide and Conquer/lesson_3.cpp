#include<bits/stdc++.h>
using namespace std;

using ll = long long;
/*
và k <= n
Ta có
+ x[1] + x[2] + x[3] + ... + x[k] = n
+ x[i] >= 1;
-> (n - 1)C(k - 1)

Ta có
+ x[1] + x[2] + x[3] + ... + x[k] = n
+ x[i] >= 0;
-> (n + k - 1)C(k - 1)
*/
ll mod = 1e9 + 7;
ll binpow(int n, ll m){
    if(m == 0) return 1;
    ll tmp = binpow(n, m / 2);
    if(m % 2 == 0) return (tmp % mod) * (tmp % mod) % mod;
    return (tmp % mod) * (tmp % mod) % mod * (n % mod) % mod;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin >> n;
    cout << pow(2, n - 1);
    return 0;
}