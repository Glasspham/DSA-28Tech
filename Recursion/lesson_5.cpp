#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll factorial(ll n) {
    return (n <= 1) ? 1 : n * factorial(n - 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n; cin >> n;
    cout << factorial(n);
    return 0;
}