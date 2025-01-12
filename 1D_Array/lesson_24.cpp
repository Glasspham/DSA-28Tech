#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k; cin >> n >> k;
    int a[n], sum = 0;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        if(i < k) sum += a[i];
        if(i == k - 1) cout << sum << ' ';
    }
    for(int i = k; i < n; ++i) {
        sum += a[i] - a[i - k];
        cout << sum << ' ';
    }
    return 0;
}