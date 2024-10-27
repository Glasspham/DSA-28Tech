#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, s; cin >> n >> s;
    int a[n];
    for(int &x : a) cin >> x;
    int l = 0, r = 0, total = 0, res = 0;
    for(; r < n; ++r){
        total += a[r];
        while(total > s){
            total -= a[l];
            ++l;
        }
        res += (r - l + 1);
    }
    cout << res << endl;
    return 0;
}