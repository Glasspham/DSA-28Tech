#include<bits/stdc++.h>
using namespace std;
#define ll long long

int a[1005], n;
bool f = true;

void check(int i) {
    if(!f) return;
    if(i > n / 2) return;
    if(a[i] != a[n - i - 1]) {
        f = false;
        return;
    }
    check(i + 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    check(0);
    cout << (f ? "YES" : "NO");
    return 0;
}