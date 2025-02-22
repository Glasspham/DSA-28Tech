#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll sum(ll n) {
    return (n < 1) ? 0 : n * pow(-1, n) + sum(n - 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n; cin >> n;
    cout << sum(n);
    return 0;
}