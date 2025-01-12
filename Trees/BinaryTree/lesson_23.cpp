#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int a; cin >> a;
    for(int i = 0; i < n; ++i) {
        int b; cin >> b;
        if(b > a) a = b;
        else if(b < a) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}