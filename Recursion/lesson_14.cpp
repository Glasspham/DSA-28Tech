#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll count(ll n) {
    return (!n) ? 0 : 1 + count(n / 10);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n; cin >> n;
    cout << count(n);
    return 0;
}