#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n]; for(int &x : a) cin >> x;
    sort(a, a + n, greater<int>());
    ll res = 0;
    for(int i = 0; i < n; ++i)
        res += pow(2,i) * a[i];
    cout << res;
    return 0;
}