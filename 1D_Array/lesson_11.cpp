#include<bits/stdc++.h>
using namespace std;
#define ll long long

#if 0
bool SCP(ll x) {
    ll s = sqrt(x);
    return (x == s * s);
}

bool Check(ll n) {
    return SCP(5 * n * n + 4) or SCP(5 * n * n - 4);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef GLASS
    freopen("../Text.inp", "r", stdin);
    freopen("../Text.out", "w", stdout);
    #endif
    bool f = true;
    int n; cin >> n;
    for(int i = 0; i < n; ++i) {
        ll num; cin >> num;
        if(Check(num)) {
            cout << num << ' ';
            f = false;
        }
    }
    if(f) cout << "NONE\n";
    return 0;
}
#endif

#if 1
ll Fibo[101];
void sieve() {
    Fibo[0] = 0, Fibo[1] = 1;
    for(int i = 2; i < 101; ++i)
        Fibo[i] = Fibo[i - 1] + Fibo[i - 2]; 
}

bool Check(ll num) {
    for(int i = 0; i < 101; ++i)
        if(Fibo[i] == num) 
            return true;
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef GLASS
    freopen("../Text.inp", "r", stdin);
    freopen("../Text.out", "w", stdout);
    #endif
    sieve();
    bool f = true;
    int n; cin >> n;
    for(int i = 0; i < n; ++i) {
        ll num; cin >> num;
        if(Check(num)) {
            cout << num << ' ';
            f = false;
        }
    }
    if(f) cout << "NONE";
    return 0;
}
#endif