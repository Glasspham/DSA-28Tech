#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool F[10000005];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        F[x] = true;
    }
    int q; cin >> q;
    while(q--) {
        int x; cin >> x;
        if(F[x]) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}