#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int dp[100001];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n], res = 0; for(int &x : a) cin >> x;
    for(int i = 0; i < n; ++i){
        dp[i] = 1;
        for(int j = 0; j < i; ++j)
            if(a[j] < a[i])
                dp[i] = max(dp[i], dp[j] + 1);
        res = max(res, dp[i]);
    }
    cout << n - res;
    return 0;
}