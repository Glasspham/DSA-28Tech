#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int dp[40];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    dp[0] = 1; 
    for(int i = 1; i <= n; ++i)
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    cout << dp[n];
    return 0;
}