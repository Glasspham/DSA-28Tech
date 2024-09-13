#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int findIndex(int a[], int b[], int n){
    int l = 0, r = n - 2, res = -1;
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m] == b[m])
            l = m + 1;
        else{
            res = m;
            r = m - 1;
        }
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n]; for(int &x : a) cin >> x;
    int b[n - 1]; for(int &x : b) cin >> x;
    cout << findIndex(a, b, n) + 1;
    return 0;
}