#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x; cin >> n >> x;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n);
    int r = n - 1, l = 0, cnt = 0;
    while (l <= r){
        if(a[l] + a[r] <= x)
            ++cnt, --r, ++l;
        else
            --r, ++cnt;
    }
    cout << cnt;
    return 0;
}