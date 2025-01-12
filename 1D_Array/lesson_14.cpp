#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll GCD(ll a, ll b) {
    while(b) {
        ll tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, val; cin >> n;
    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        if(i == 0) val = x;
        else val = GCD(val, x);
    }
    cout << val;
    return 0;
}