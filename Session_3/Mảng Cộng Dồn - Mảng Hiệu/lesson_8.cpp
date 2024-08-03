#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 1e5 + 5;
ll a[maxn], l[maxn], r[maxn], val[maxn], diff[maxn], query[maxn];
int n, m, k;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m >> k;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    for(int i = 1; i <= m; ++i)
        cin >> l[i] >> r[i] >> val[i];
    for(int i = 1; i <= k; ++i){
        int x, y; cin >> x >> y;
        diff[x]++; diff[y + 1]--;
    }
    for(int i = 1; i <= m; ++i){
        diff[i] += diff[i - 1];
        query[l[i]] += diff[i] * val[i];
        query[r[i] + 1] -= diff[i] * val[i];
    }
    for(int i = 1; i <= n; ++i){
        query[i] += query[i - 1];
        cout << a[i] + query[i ] << ' ';
    }
    return 0;
}