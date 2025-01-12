#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int f[1000005] = {0}, a[n];
    for(int &x : a) {
        cin >> x;
        f[x]++;
    }
    for(int x : a) {
        if(f[x]) {
            cout << x << ' ' << f[x] << endl;
            f[x] = 0;
        }
    }
    return 0;
}