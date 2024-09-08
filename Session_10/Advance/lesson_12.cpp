#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n + 1], dp[n + 1];
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        dp[i] = a[i];
    }
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j < i; ++j)
            if(a[i] > a[j])
                dp[i] = max(dp[i], dp[j] + a[i]);
    cout << *max_element(dp + 1, dp + n + 1);
    return 0;
}