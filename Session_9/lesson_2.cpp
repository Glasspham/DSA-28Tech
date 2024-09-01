#include<bits/stdc++.h>
using namespace std;

using ll = long long;
ll mod = 1e9 + 7;
ll binpow(int n, int m){
    if(m == 0) return 1;
    ll tmp = binpow(n, m / 2);
    if(m % 2 == 0) return (tmp % mod) * (tmp % mod) % mod;
    return (tmp % mod) * (tmp % mod) % mod * (n % mod) % mod;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    int n = stoi(s);
    reverse(s.begin(), s.end());
    int m = stoi(s);
    cout << binpow(n,m);
    return 0;
}