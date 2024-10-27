#include<bits/stdc++.h>
using namespace std;

using ll = long long;

#if 0 // Quy hoạch động
struct Job{
    int st, ed;
    ll profit;
};

int first_pos(Job a[], int n, int x){
    int l = 0, r = n, res = -1;
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m].ed <= x){
            res = m;
            l = m + 1;
        } else r = m - 1;
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    Job a[n + 1];
    ll dp[n + 1] = {0};
    for(int i = 1; i <= n; ++i)
        cin >> a[i].st >> a[i].ed >> a[i].profit;
    sort(a + 1, a + n + 1, [](Job x, Job y){
        return x.ed < y.ed;
    }); 

    for(int i = 1; i <= n; ++i){
        int t = first_pos(a, i, a[i].st - 1);
        if(t == -1) dp[i] = max(a[i].profit + 0, dp[i - 1]); 
        else dp[i] = max(a[i].profit + dp[t], dp[i - 1]);
    }

    cout << dp[n];

    return 0;
}
#endif 

#if 1 // Đệ quy có nhớ
struct Job{
    int st, ed;
    ll profit;
};

int first_pos(Job a[], int n, int x){
    int l = 0, r = n, res = -1;
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m].ed <= x){
            res = m;
            l = m + 1;
        } else r = m - 1;
    }
    return res;
}

Job a[100001];
ll dp[100001];

ll solve(int n){
    if(n == 0) return 0;
    if(dp[n] != 0) return dp[n];
    dp[n] = 0;
    int t = first_pos(a, n, a[n].st - 1);
    if(t != -1) dp[n] = max(a[n].profit + solve(t), solve(n - 1)); 
    else dp[n] = max(a[n].profit + 0, solve(n - 1));
    return dp[n];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> a[i].st >> a[i].ed >> a[i].profit;
    sort(a + 1, a + n + 1, [](Job x, Job y){
        return x.ed < y.ed;
    });
    cout << solve(n);
    return 0;
}
#endif