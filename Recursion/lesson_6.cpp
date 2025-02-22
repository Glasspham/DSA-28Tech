#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll fibonacci(ll n) {
    if(n == 1) return 0;
    if(n == 2) return 1;
    return fibonacci(n - 2) + fibonacci(n - 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n; cin >> n;
    cout << fibonacci(n);
    return 0;
}