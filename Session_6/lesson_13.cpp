#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n]; for(int &x : a) cin >> x;
    sort(a, a + n, greater<int>());
    int cnt = 1, res = a[0];
    for(int i = 0; i < n; ++i){
        if(res == 0) break;
        ++cnt;
        res = min(res - 1, a[i]);
    }
    cout << cnt;
    return 0;
}