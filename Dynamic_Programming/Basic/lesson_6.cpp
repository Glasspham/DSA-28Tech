#include <iostream>
#include <vector>
using namespace std;

using ll = long long;
int MOD = 1e9 + 7, MAXN = 1e6;

vector<ll> dp(MAXN + 1, 1);
vector<bool> Prime(MAXN + 1, true);

void sieve() {
    Prime[0] = Prime[1] = false;
    for(int i = 2; i <= 1e4; ++i)
        if(Prime[i])
            for(int j = 2 * i; j <= MAXN; j += i)
                Prime[j] = false;

    for(int i = 2; i <= MAXN; ++i){
        dp[i] = dp[i - 1];
        if(Prime[i])
            dp[i] = (dp[i] * i) % MOD;
    }
}

int main(){
    sieve();
    int T; cin >> T;
    while(T--){
        int N; cin >> N;
        cout << dp[N] << endl;
    }
    return 0;
}
