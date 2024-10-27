#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    int n = s.size();
    s = "0" + s;
    ll res = 0, dp[n + 1] = {0};
    for(int i = 1; i <= n; ++i){
        dp[i] = dp[i - 1] * 10 + i * (s[i] - '0');
        res += dp[i];
    }
    cout << res << endl;
    return 0;
}