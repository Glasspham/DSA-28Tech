#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool Check(int a, int b) {
    return (a < 0 and b > 0) or (a > 0 and b < 0);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    bool ok[n] = {false};
    int a[n];
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        if(i == 0) continue;
        if(Check(a[i], a[i - 1]))
            ok[i] = ok[i - 1] = true;
    }
    for(int i = 0; i < n; ++i)
        if(ok[i])
            cout << a[i] << ' ';
    return 0;
}