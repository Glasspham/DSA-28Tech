#include<bits/stdc++.h>
using namespace std;

bool BNS(int a[], int n, int x){
    int l = 0, r = n - 1;
    while(l <= r){
        int m = (r + l) / 2;
        if(a[m] == x)
            return true;
        else if(a[m] < x) l = m + 1;
        else r = m - 1;
    }
    return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n]; for(int &x : a) cin >> x;
    sort(a, a + n);
    int q; cin >> q;
    while(q--){
        int x; cin >> x;
        if(BNS(a,n,x)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}