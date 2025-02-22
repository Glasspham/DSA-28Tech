#include<bits/stdc++.h>
using namespace std;
#define ll long long

float sum(int n) {
    return (n == 1) ? 1 : (1.0 / n) + sum(n - 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    cout << fixed << setprecision(3) << sum(n);
    return 0;
}