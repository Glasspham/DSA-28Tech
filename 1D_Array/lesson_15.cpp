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
    int val1 = INT_MIN, val2 = INT_MIN;
    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        if(x >= val1) {
            val2 = val1;
            val1 = x;
        } else if(x > val2) 
            val2 = x;
    }
    cout << val1 << ' ' << val2;
    return 0;
}