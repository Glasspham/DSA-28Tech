#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k; cin >> n >> k;
    int a[n], ans = 0;
    for(int &x : a) cin >> x;
    sort(a, a + n);
    for(int i = 0; i < n; ++i){
        auto it = lower_bound(a + i + 1, a + n, k - a[i]);
        --it;
        ans += it - (a + i);
    }
    cout << ans;
    return 0;
}