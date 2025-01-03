#include<bits/stdc++.h>
using namespace std;
#define ll long long

int Prime[1000001];
void sieve() {
    for(int i = 0; i < 1000001; ++i)
        Prime[i] = 1;
    Prime[0] = Prime[1] = 0;
    for(int i = 2; i < 1001; ++i) {
        if(Prime[i]) {
            for(int j = i * i; j < 1000001; j += i)
                Prime[j] = 0;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef GLASS
    freopen("../Text.inp", "r", stdin);
    freopen("../Text.out", "w", stdout);
    #endif
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sieve();
    for(int i = 1; i < n - 1; ++i) {
        int s1 = accumulate(a, a + i, 0);
        int s2 = accumulate(a + i + 1, a + n, 0);
        if(Prime[s1] and Prime[s2])
            cout << i << ' ';
    }
    return 0;
}