#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int Lower_bound(int a[], int n, int x){
    int l = 0, r = n - 1, res = -1;
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m] <= x){
            res = m;
            l = m + 1;
        }else r = m - 1;
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x; cin >> n >> x;
    int a[n]; for(int &x : a) cin >> x;
    auto it = lower_bound(a, a + n, x);
    cout << *it << endl;
    cout << a[Lower_bound(a, n, x)];
    return 0;
}