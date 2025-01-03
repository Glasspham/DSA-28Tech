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
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int k; cin >> k;
    int cntBigger = 0, cntSmaller = 0;
    for(int x : a) {
        if(x > k) ++cntBigger;
        if(x < k) ++cntSmaller;
    }
    cout << cntSmaller << endl << cntBigger;
    return 0;
}