#include<bits/stdc++.h>
using namespace std;
#define ll long long
int f[1000001] = {0};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef GLASS
    freopen("../Text.inp", "r", stdin);
    freopen("../Text.out", "w", stdout);
    #endif
    int n; cin >> n;
    int a[n];
    for(int &x : a) {
        cin >> x;
        f[x]++;
    }
    int val = a[0], cnt = f[a[0]];
    f[a[0]] = 0;
    for(int x : a) {
        if(f[x] and f[x] > cnt) {
            if(f[x] > cnt) {
                val = x;
                cnt = f[x];
            }
        }
        f[x] = 0;
    }
    cout << val << ' ' << cnt;
    return 0;
}