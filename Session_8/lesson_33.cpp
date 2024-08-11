#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        #if 0
        bool f = true;
        for(int i = n; i >= 0; --i){
            if((5 * i) % 3 == 0 and (3 * (n - i) % 5 == 0)){
                for(int j = 0; j < i; ++j) cout << 5;
                for(int j = 0; j < n - i; ++j) cout << 3;
                cout << endl;
                f = false;
                break;
            }
        }
        if(f) cout << -1 << endl;
        #endif

        #if 1
        int three = ((3 - (n % 3)) % 3) * 5;
        if(three > n) cout << -1;
        else cout << string(n - three, '5') << string(three, '3');
        cout << endl;
        #endif
    }
    return 0;
}