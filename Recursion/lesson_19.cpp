#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool f = true;
void check(ll n) {
    if(!f) return;
    if(!n) return;
    if(n % 10 % 2 == 1) {
        f = false;
        return;
    }
    check(n / 10);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n; cin >> n;
    check(n);
    cout << (f ? "YES" : "NO");
    return 0;
}