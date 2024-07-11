#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x; cin >> n >> x;
    int a[n]; for(int &x : a) cin >> x;
    sort(a, a  + n);
    for(int i = 0; i < n; ++i){
        auto it = lower_bound(a + i + 1, a + n, x + a[i]);
        if(it != a + n and *it == x + a[i]){
            cout << 1;
            return 0;
        }
    }
    cout << -1;
    return 0;
}