#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n]; for(int &x : a) cin >> x;
    sort(a, a + n);
    int minmun = INT_MAX;
    for(int i = 1; i < n; ++i)
        if(abs(a[i] - a[i - 1]) < minmun)
            minmun = abs(a[i] - a[i - 1]);
    cout << minmun;
    return 0;
}