#include<bits/stdc++.h>
using namespace std;
#define ll long long

string DecToBin(ll n) {
    if(n == 0) return "0";
    if(n == 1) return "1";
    return DecToBin(n / 2) + ((n % 2 == 0) ? "0" : "1");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n; cin >> n;
    cout << DecToBin(n);
    return 0;
}