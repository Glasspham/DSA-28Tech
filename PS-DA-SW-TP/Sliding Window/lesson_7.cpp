#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k; cin >> n >> k;
    int a[n]; for(int &x : a) cin >> x;
    int l = 0, r = 0, cur_cnt = 0, start = 0, min_len = INT_MAX;
    for(; r < n; ++r){
        cur_cnt += a[r];
        while(cur_cnt - a[l] >= k){
            cur_cnt -= a[l];
            ++l;
            if(r - l + 1 < min_len){
                min_len = r - l + 1;
                start = l;
            }
        }
    }
    if(min_len == INT_MAX) cout << -1 << endl;
    else for(int i = start; i < start + min_len; ++i) cout << a[i] << ' ';
    return 0;
}