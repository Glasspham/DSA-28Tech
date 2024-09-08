#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n + 1], dp[n + 1] = {0};
    map<int, int> mp;
    int t= 0, cnt = 0;
    mp[0] = 1;
    for(int i = 1; i <= n; ++i){
        int num; cin >> num;
        if(num % 2 == 1) ++t;
        else --t;
        dp[i] = t;
        cnt += mp[dp[i]];
        mp[dp[i]]++;
    }
    cout << cnt;
    return 0;
}