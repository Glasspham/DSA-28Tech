#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n; cin >> n;
    ll a[n + 1], d1 = 0, d2 = 0, kq = 0, d28 = 0;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        if(a[i] % 28 == 0) {
            a[i] = 0;
            d28++;
        } else a[i] %= 28;
    }
    sort(a + 1, a + n + 1);
    for(ll i = 1; i <= n; i++) {
        d1 = lower_bound(a + i + 1, a + n + 1, 28 - a[i]) - a;
        d2 = upper_bound(a + i + 1, a + n + 1, 28 - a[i]) - a - 1;
        if(d1 <= d2) kq += d2 - d1 + 1;
    }
    kq += d28 * (d28 - 1) / 2;
    cout << kq;
    return 0;
}