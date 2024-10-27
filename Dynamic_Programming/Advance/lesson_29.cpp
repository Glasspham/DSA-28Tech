#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int dp[250005];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int s = n * (n + 1) / 2;
    int mod = 1e9 + 7, res = 0;
    if(s % 2 == 0){
        s /= 2;
        dp[0] = 1;
        for(int i = 1; i <= n; ++i){
            for(int j = s; j >= 1; --j){
                if(j >= i){
                    dp[j] += dp[j - i];
                    if(i == n and j == s)
                        res = dp[j - i];
                }
                dp[j] %= mod;
            }
        }
        cout << res;
    } else cout << 0;
    return 0;
}