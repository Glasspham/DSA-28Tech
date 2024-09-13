#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k; cin >> n >> k;
    int a[n]; for(int &x : a) cin >> x;
    sort(a, a + n, greater<int>());
    long long total = a[0];
    for(int i = 1; i < n; ++i){
        if(i <= k) total += a[i];
        else total -= a[i];
    }
    cout << total;
    return 0;
}