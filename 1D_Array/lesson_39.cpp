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
    int n, cnt = 1; cin >> n;
    string s0, s1;
    int a[n];
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        if(i == 0) continue;
        if(a[i] == a[i - 1]) ++cnt;
        else {
            if(a[i - 1] == 1) s1 += to_string(cnt) + ' ';
            else s0 += to_string(cnt) + ' ';
            cnt = 1;
        }
    }
    if(a[n - 1] == 1) s1 += to_string(cnt);
    else s0 += to_string(cnt);
    cout << s1 << endl << s0;
    return 0;
}