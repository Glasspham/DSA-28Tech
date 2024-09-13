#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll mod = 1e9 + 7;
int f[1001];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, s; cin >> n >> s;
    int a[n + 1];
    for(int i = 1; i <= n; ++i) cin >> a[i];
    f[0] = 1;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= s; ++j){
            if(j >= a[i])
                f[j] = f[j - a[i]] + f[j];
            else f[j] = f[j];
            f[j] %= mod;
        }
    }
    cout << f[s];
    return 0;
}