#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, X, k; cin >> n >> X >> k;
    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        if(i == k - 1) cout << X << ' ';
        cout << x << ' ';
    }
    return 0;
}