#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll sum(ll n) {
    return (!n) ? 0 : n % 10 + sum(n / 10);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n; cin >> n;
    cout << sum(n);
    return 0;
}