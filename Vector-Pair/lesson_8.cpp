#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    for(int i = 0; i < n; ++i) {
        int x, y, z;
        cin >> x >> y >> z;
        cout << x + y + z << ' ';
    }
    return 0;
}