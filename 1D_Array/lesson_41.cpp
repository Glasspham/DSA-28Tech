#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        if(x != 28)
            cout << x << ' ';
    }
    return 0;
}