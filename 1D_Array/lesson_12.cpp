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
    int idx_st = -1, idx_ed = -1;
    int val_max = INT_MIN, val_min = INT_MAX;
    for(int i = 0; i < n; ++i) {
        int num; cin >> num;
        if(val_max < num) {
            val_max = num;
            idx_st = i;
        }
        if(val_min >= num) {
            val_min = num;
            idx_ed = i;
        }
    }
    cout << idx_ed << ' ' << idx_st;
    return 0;
}