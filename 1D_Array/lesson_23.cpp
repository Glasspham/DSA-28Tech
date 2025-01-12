#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        if(i == 0) continue;
        a[i] += a[i - 1];
    }
    for(int x : a) cout << x << ' ';
    return 0;
}