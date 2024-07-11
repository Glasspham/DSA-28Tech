#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n]; for(int &x : a) cin >> x;
    sort(a, a + n, greater<int>());
    long long res = 0;
    for(int i = 0; i < n; ++i){
        if(a[i] - i <= 0) break;
        res += a[i] - i;
    }
    cout << res;
    return 0;
}