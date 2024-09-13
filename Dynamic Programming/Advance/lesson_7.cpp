#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int c, n; cin >> c >> n;
    int w[n + 1], dp[c + 1] = {0}; 
    for(int i = 1; i <= n; ++i) cin >> w[i];
    for(int i = 1; i <= n; ++i)
        for(int j = c; j >= w[i]; --j)
            dp[j] = max(dp[j], dp[j - w[i]] + w[i]);
    return 0;
}


#if 0 // Quay lui
int a[101], c, n, res = 0;
void Try(int i, int s){
    for(int j = i; j <= n; ++j){
        if(a[j] + s <= c){
            res = max(res, s + a[j]);
            Try(j + 1, s + a[j]);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> c >> n;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    Try(1, 0);
    cout << res;
    return 0;
}
#endif