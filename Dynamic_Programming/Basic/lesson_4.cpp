#include<bits/stdc++.h>
using namespace std;

using ll = long long;
vector<bool> Prime(1e6, true);
vector<ll> dp(1e6, 0);
void seive(){
    for(int i = 2; i <= 1e6; ++i) Prime[i] = 1;
    for(int i = 2; i <= 1e4; ++i) {
        if(Prime[i]) {
            for(int j = i * i; j <= 1e6; j += i)
                Prime[j] = 0;
        }
    }
    for(int i = 2; i <= 1e6; ++i){
        dp[i] = dp[i - 1];
        if(Prime[i]) dp[i] += 1;
    }

}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    seive();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << dp[n] << endl;
    }
    return 0;
}