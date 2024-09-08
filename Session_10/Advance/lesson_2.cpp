#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int dp[n + 1], a[n + 1];
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        dp[i] = 1;
    }
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j < i; ++j)
            if(a[j] < a[i])
                dp[i] = max(dp[i], dp[j] + 1);
    int res = dp[1];
    for(int i = 2; i <= n; ++i) res = max(res, dp[i]);
    cout << res;
    return 0;
}