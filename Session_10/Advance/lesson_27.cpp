#if 1 // DSA 28Tech (1 <= n <= 10^6)
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
ll dp[10000001];
ll solve(ll n){
    if(n == 0) return 0;
    if(dp[n] != 0) return dp[n];
    ll m = n, res = 1e9;
    while(m){
        int r = m % 10;
        if(r != 0) 
            res = min(res, solve(n - r) + 1);
        m /= 10;
    }
    dp[n] = res;
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin >> n;
    cout << solve(n);
    return 0;
}
#endif

#if 0 // On web https://lqdoj.edu.vn/problem/cses2174 (1 <= n <= 10^18)
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define hutao_my_wife ios_base::sync_with_stdio(0);
#define forcalors_so_cute cin.tie(0);
#define ll long long

using namespace std;

const int M = 200005;
ll dp[20][10][10];
ll to[20][10][10];
int maxdigital(ll x){
    ll ans = 0;
    while(x){
        ans = max(ans,x%10);
        x/=10;
    }
    return ans;
}

int numi(ll x){
    x/=10;
    int ans = 0;
    while(x%10 == 9){
        ans++;
        x/=10;
    }
    return ans;
}

void solve(){
    ll n;
    cin>>n;
    ll ans = 0;
    while(n>0){
        int i = numi(n);
        int k = maxdigital(n - n%(ll)pow(10,i+1));
        int j = n%10;
        ans += dp[i][j][k];
        n -= (ll)pow(10,i+1);
        n = n - n%10 + to[i][j][k];
    }
    cout<<ans<<'\n';

}

signed main(){
    hutao_my_wife forcalors_so_cute

    int t = 1;
    memset(dp,0,sizeof(dp));
    for(int i = 0; i <= 18; i++){
        for(int k = 0; k < 10; k++){
            for(int j = 0; j < 10; j++){
                if(i+j+k == 0){
                    to[i][j][k] = 0;
                    continue;
                }
                if(i+k == 0){
                    dp[i][j][k]=1,to[i][j][k]=0;
                    continue;
                }
                if(i == 0){
                    if(j < k)dp[i][j][k] = 1,to[i][j][k]=(10+j-k)%10;
                    else dp[i][j][k] = 2,to[i][j][k] = (10-k)%10;
                    continue;
                }
                int last = j;
                for(int l = 9; l >= 0; l--){
                    dp[i][j][k] += dp[i-1][last][max(k,l)];
                    last = to[i-1][last][max(k,l)];
                }
                to[i][j][k] = last;
            }
        }
    }
    while(t--)
        solve();
}
#endif