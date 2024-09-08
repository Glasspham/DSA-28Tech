#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    if(int(sqrt(n)) * int(sqrt(n)) == n) cout << "1\n";
    else if(n == 2 or n == 3) cout << n << endl;
    else{
        int dp[n + 1] = {0};
        dp[1] = 1;
        for(int i = 2; i <= n; ++i){
            dp[i] = i;
            for(int j = 1; j <= sqrt(i); ++j)
                dp[i] = min(dp[i], 1 + dp[i - j * j]);
        }
        cout << dp[n];
    }
    return 0;
}
