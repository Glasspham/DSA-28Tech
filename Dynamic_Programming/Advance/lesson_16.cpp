#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int f[1001] = {1};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x; cin >> n >> x;
    int a[n + 1]; 
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    int mod = 1e9 + 7;
    for(int i = 1; i <= x; ++i)
        for(int j = 1; j <= n; ++j)
            if(i >= a[j]){
                f[i] += f[i - a[j]];
                f[i] %= mod;
            }
    cout << f[x];
    return 0;
}