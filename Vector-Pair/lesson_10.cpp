#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<pair<char,int>> vp;
    int n; cin >> n;
    for(int i = 0; i < n; ++i) {
        char c; cin >> c;
        bool f = true;
        for(auto &p : vp) {
            if(p.first == c) {
                ++p.second;
                f = false;
                break;
            }
        }
        if(f) vp.push_back({c, 1});
    }
    for(auto it : vp) cout << it.first << ' ' << it.second << endl;
    return 0;
}