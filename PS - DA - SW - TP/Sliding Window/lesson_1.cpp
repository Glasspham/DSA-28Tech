#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    ll total = 0;
    for(int i = 0; i < k; ++i) total += a[i];
    ll tmp = total, idx;
    for(int i = k; i < n; ++i){
        total += (-a[i - k] + a[i]);
        if(total > tmp){
            tmp = total;
            idx = i - k + 1;
        }
    }
    cout << tmp << endl;
    for(int i = 0; i < k; ++i)
        cout << a[idx + i] << ' ';
    return 0;
}