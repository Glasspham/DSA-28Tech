#include<bits/stdc++.h>
using namespace std;

int DanhDau[1000005];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    #if 0
    int n, l = INT_MAX, r = INT_MIN; cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        DanhDau[a[i]] = 1;
        if(a[i] < l) l = a[i];
        if(a[i] > r) r = a[i];
    }
    sort(a, a + n);
    int cnt = 0;
    for(int i = l; i <= r; ++i)
        if(!DanhDau[i]) ++cnt;
    cout << cnt;
    #endif

    #if 1
    int n, cnt = 0; cin >> n;
    int a[n]; for(int &x : a) cin >> x;
    for(int i = 0; i < n - 1; ++i)
        if(a[i + 1] - a[i] > 1)
            cnt += a[i + 1] - a[i] - 1;
    cout << cnt;
    #endif
    return 0;
}