#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n + 1], dp1[n + 1], dp2[n + 1];
    for(int i = 1; i <= n; ++i) cin >> a[i];
    for(int i = 1; i <= n; ++i){
        dp1[i] = a[i];
        for(int j = 1; j < i; ++j)
            if(a[j] < a[i])
                dp1[i] = max(dp1[i], dp1[j] + a[i]);
    }

    for(int i = n; i >= 1; --i){
        dp2[i] = a[i];
        for(int j = n; j > i; --j)
            if(a[j] < a[i])
                dp2[i] = max(dp2[i], dp2[j] + a[i]);
    }

    int res = 0;
    for(int i = 1; i <= n; ++i)
        res = max(res, dp1[i] + dp2[i] - a[i]);
    cout << res;
    return 0;
}