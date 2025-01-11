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
    string s; cin >> s;
    map<char,int> mp;
    for(char c : s) mp[c]++;
    int fmax = INT_MIN, fmin = INT_MAX;
    char rmax, rmin;
    for(auto [c, f] : mp) {
        if(f > fmax or (f == fmax and c < rmax)) {
            fmax = f;
            rmax = c;
        }
        if(f < fmin or (f == fmin and c > rmin)) {
            fmin = f;
            rmin = c;
        }
    }
    cout << rmax << ' ' << fmax << endl;
    cout << rmin << ' ' << fmin << endl;
    cout << mp.size() << ' ';
    return 0;
}