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
    map<string, int> mp;
    int fmin = INT_MAX, fmax = INT_MIN;
    string s, smax, smin;
    while(cin >> s)
        mp[s]++;
    for(auto it : mp) {
        if(it.second > fmax) {
            fmax = it.second;
            smax = it.first;
        }
        if(it.second < fmin) {
            fmin = it.second;
            smin = it.first;
        }
    }
    cout << mp.size() << endl << smin << ' ' << smax;
    return 0;
}