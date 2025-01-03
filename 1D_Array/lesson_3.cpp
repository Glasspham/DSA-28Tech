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
    int val_min = INT_MAX, cnt_min = 1;
    for(int i = 0; i < n; ++i) {
        int num; cin >> num;
        if(val_min > num) {
            cnt_min = 1;
            val_min = num;
        } else if(val_min == num)
            ++cnt_min;
    }
    cout << cnt_min;
    return 0;
}