#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int maxn = 2000005;
int a[maxn], t[4 * maxn], n;
// TODO Build tree
void build(int v, int l, int r) {
    if(l == r) t[v] = a[l];
    else {
        int m = (l + r) / 2;
        build(v * 2, l, m);
        build(v * 2 + 1, m + 1, r);
        t[v] = t[v * 2] + t[v * 2 + 1];
    }
}

// TODO Query sum from l to r
int sum(int v, int _l, int _r, int l, int r) {
    if(l > r) return 0;
    if(_l == l and _r == r) return t[v];
    else {
        int _m = (_l + _r) / 2;
        return sum(v * 2, _l, _m, l, min(_m, r))
            + sum(v * 2 + 1, _m + 1, _r, max(_m + 1, l), r);
    }
}

// TODO Update change a[pos] = val
void update(int v, int l, int r, int pos, int val) {
    if(l == r) t[v] = val;
    else {
        int m = (l + r) / 2;
        if(m >= pos) update(v * 2, l, m, pos, val);
        else update(v * 2 + 1, m + 1, r, pos, val);
        t[v] = t[v * 2] + t[v * 2 + 1];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    build(1, 0, n - 1);
    int l, r; cin >> l >> r;
    cout << sum(1, 0, n - 1, l , r);
    return 0;
}