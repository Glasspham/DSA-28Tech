#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n + 1], dp1[n + 1] = {0}, dp2[n + 1] = {0}, res = 1;
    for(int i = 1; i <= n; ++i) cin >> a[i];

    dp1[1] = 1;
    for(int i = 2; i <= n; ++i){
        if(a[i] > a[i - 1])
            dp1[i] = dp1[i - 1] + 1;
        else dp1[i] = 1;
        res = max(res, dp1[i]);
    }

    dp2[n] = 1;
    for(int i = n - 1; i >= 1; --i){
        if(a[i + 1] > a[i])
            dp2[i] = dp2[i + 1] + 1;
        else dp2[i] = 1;
    }

    for(int i = 2; i <= n - 1; ++i)
        if(a[i - 1] < a[i + 1])
            res = max(res, dp1[i - 1] + dp2[i + 1]);
    
    cout << res;
    return 0;
}