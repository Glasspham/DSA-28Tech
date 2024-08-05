#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    ll a[n]; for(ll &x : a) cin >> x;
    sort(a, a + n);
    if(n > 3){
        cout << max({
            a[n - 1] * a[n - 2], 
            a[0] * a[1],
            a[n - 1] * a[n - 2] * a[n - 3],
            a[0] * a[1] * a[n - 1]
        });
    }else{
        cout << max({
            a[n - 1] * a[n - 2], 
            a[0] * a[1],
        });
    }
    return 0;
}