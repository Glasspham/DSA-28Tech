#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef GLASS
    freopen("../Text.inp", "r", stdin);
    freopen("../Text.out", "w", stdout);
    #endif
    int n; cin >> n;
    map<int,int> mp;
    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        mp[x]++;
    }
    int t; cin >> t;
    for(int i = 0; i < t; ++i) {
        int s, x; cin >> s >> x;
        if(s == 1) mp[x]++;
        else if(s == 2) {
            if(mp.find(x) != mp.end()) {
                mp[x]--;
                if(mp[x] < 0)
                    mp.erase(x);
            }
        } else if(s == 3) {
            auto it = mp.upper_bound(x);
        }
    }
    return 0;
}