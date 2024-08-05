#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n]; for(int &x : a) cin >> x;
    sort(a, a + n);
    int time = a[0], cnt = 1;
    for(int i = 1; i < n; ++i){
        if(a[i] >= time){
            ++cnt;
            time += a[i];
        }
    }
    cout << cnt;
    return 0;
}