#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n + 1], s = 0;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        s += a[i];
    }

    bool dp[s + 1] = {false};
    dp[0] = true;
    for(int i = 1; i <= n; ++i)
        for(int j = s; j >= 1; --j)
            if(j >= a[i])
                dp[j] = dp[j] or dp[j - a[i]];

    for(int i = 0; i <= s; ++i)
        if(dp[i]) cout << i << ' ';
    return 0;
}