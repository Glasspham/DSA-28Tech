#include<bits/stdc++.h>
using namespace std;

using ll = long long;

bool check(int a[], int n, int t, int time){
    ll cnt = 0;
    for(int i = 0; i < n; ++i) cnt += time / a[i];
    return cnt >= t;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, t; cin >> n >> t;
    int a[n]; for(int &x : a) cin >> x;
    ll left = 0, right = 1ll * (*min_element(a, a + n)) * t, ans = -1;
    while(left <= right){
        // Time ở giữa xem n máy tạo ra bao nhiêu sản phẩm
        ll mid = (left + right) / 2;
        if(check(a, n, t, mid)){
            ans = mid;
            right = mid - 1;
        }
        else left = mid + 1;
    }
    cout << ans;
    return 0;
}