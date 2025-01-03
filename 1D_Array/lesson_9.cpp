#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef GLASS
    freopen("../Text.inp", "r", stdin);
    freopen("../Text.out", "w", stdout);
    #endif
    int F[1005] = {0};
    int n; cin >> n;
    int a[n];
    for(int &x : a) {
        cin >> x;
        F[x]++;
    }
    for(int i = 0; i < n; ++i) {
        if(F[a[i]]) {
            cout << a[i] << ' ' << F[a[i]] << endl;
            F[a[i]] = 0;
        }
    }
    return 0;
}