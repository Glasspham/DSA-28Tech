#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k; cin >> n >> k;
    int a[n]; for(int &x : a) cin >> x;
    sort(a, a + n);
    int cnt = 0;
    for(int &x : a){
        if(k >= x){
            cnt++;
            k -= x;
        }
    }
    cout << cnt;
    return 0;
}