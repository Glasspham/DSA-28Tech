#include<bits/stdc++.h>
using namespace std;

using ll = long long;

#if 1
bool check(int a[], ll n, ll l, ll h){
    ll length_curr = 0;
    for(int i = 0; i < n; ++i)
        length_curr += a[i] - h;
    return length_curr >= l;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, l; cin >> n >> l;
    int a[n]; for(int &x : a) cin >> x;
    ll left = 0, right = *max_element(a, a + n), ans = -1;
    while(left <= right){
        ll mid = (left + right) / 2;
        if(check(a,n,l,mid)){
            ans = mid;
            left = mid + 1;
        }
        else right = mid - 1;
    }
    cout << ans;
    return 0;
}
#endif

#if 0
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int n, L, cnt = 0, sum = 0;
    cin >> n >> L;
    map<int,int>a;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a[x]++;
    }
    auto it = a.end();
    it--;
    int d = it->first; // khúc gỗ dài nhất
    while(d){
        if(d == it->first){ // nếu tìm được khúc gỗ thấp hơn
            cnt += it->second; // số khúc gỗ đang bị chặt
            it--;
        }
        sum += cnt;
        d--;
        if(sum >= L){cout << d; return 0;}
    }
    return 0;
}
#endif