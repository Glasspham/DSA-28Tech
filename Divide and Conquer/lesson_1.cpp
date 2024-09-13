#include<bits/stdc++.h>
using namespace std;

using ll = long long;
ll mod = 1e9 + 7;
/*
a^b
1, b = 0
a^(b/2) * a^(b/2): b là số chẵn
a^(b/2) * a^(b/2) * a: b là số chẵn
*/
ll binpow(int a, int b){
    if(b == 0) return 1;
    ll tmp = binpow(a, b / 2);
    if(b % 2 == 0) return (tmp % mod) * (tmp % mod) % mod;
    return (tmp % mod) * (tmp % mod) % mod * (a % mod) % mod;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k; cin >> n >> k;
    cout << binpow(n,k);
    return 0;
}