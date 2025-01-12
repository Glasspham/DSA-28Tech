#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int k; cin >> k;
    int cnt = 0;
    for(int i = 0; i < n - 1; ++i)
        for(int j = i + 1; j < n; ++j)
            if(a[i] + a[j] == k)
                ++cnt;
    cout << cnt;
    return 0;
}