#include<bits/stdc++.h>
using namespace std;
#define ll long long

string DecToHex(ll n) {
    char hexDigit[] = "0123456789ABCDEF";
    return (n < 16) ? string(1, hexDigit[n]) : DecToHex(n / 16) + hexDigit[n % 16];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n; cin >> n;
    cout << DecToHex(n);
    return 0;
}