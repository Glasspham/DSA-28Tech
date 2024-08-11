#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n]; for(int &x : a) cin >> x;
    int res[n]; res[0] = 1;
    for(int i = 1; i < n; ++i)
        if(a[i] > a[i - 1]) res[i] = res[i - 1] + 1;
        else res[i] = 1;    
    for(int i = n - 2; i >= 0; --i){
        int tmp = res[i];
        if(a[i] > a[i + 1]) tmp = res[i + 1] + 1;
        res[i] = max(res[i], tmp);
    }
    ll sum = 0; for(int &x : res) sum += x;
    cout << sum;
    return 0;
}