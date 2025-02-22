#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll n_max = INT_MIN, n_min = INT_MAX;

void find(ll n) {
    if(!n) {
        cout << n_max << ' ' << n_min;
        return;
    }
    ll m = n % 10;
    if(m > n_max) n_max = m;
    if(m < n_min) n_min = m;
    find(n / 10);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n; cin >> n;
    find(n);
    return 0;
}