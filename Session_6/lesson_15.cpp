#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k; cin >> n >> k;
    int a[n]; for(int &x : a) cin >> x;
    sort(a, a + n);
    int cnt = 1;
    for(int i = 0; i < n - 1; ++i)
        if(a[i + 1] - a[i] > k)
            ++cnt;
    cout << cnt;
    return 0;
}