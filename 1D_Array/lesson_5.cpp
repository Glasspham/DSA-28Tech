#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    bool f = true;
    for(int i = 0; i < n; ++i) {
        int num; cin >> num;
        if(num % 2 == 0 and i % 2 == 0) {
            cout << num << ' ';       
            f = false;
        }
    }
    if(f) cout << "NONE\n";
    return 0;
}