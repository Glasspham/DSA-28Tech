#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n);
    int res = INT_MAX, tmp;
    for(int i = 0; i < n - 1; ++i)
        res = min(res, a[i + 1] - a[i]);
    cout << res;
    return 0;
}