#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll even = 0, odd = 0;
void sum(ll n) {
    if(!n) return;
    ll m = n % 10;
    (m % 2 == 0) ? even += m : odd += m;
    sum(n / 10);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n; cin >> n;
    sum(n);
    cout << even << endl << odd;
    return 0;
}