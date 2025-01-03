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
    bool F[1005] = {false};
    int n; cin >> n;
    for(int i = 0; i < n; ++i) {
        int num; cin >> num;
        if(!F[num]) {
            F[num] = true;
            cout << num << ' ';
        }
    }
    return 0;
}