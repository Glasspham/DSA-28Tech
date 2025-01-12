#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    map<int,int> mp;
    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        mp[x]++;
    }
    int q; cin >> q;
    while(q--) {
        int t, x; cin >> t >> x;
        if(t == 1) mp[x]++;
        else if(t == 2) {
            if(mp.find(x) != mp.end()) {
                mp[x]--;
                if(mp[x] < 0)
                    mp.erase(x);
            }
        } else {
            if(mp.find(x) != mp.end())
                cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}