#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    map<string, string> mp;
    for(int i = 0; i < n; ++i) {
        string key, value;
        cin >> key >> value;
        mp[key] = value;
    }
    int q; cin >> q;
    while(q--) {
        string key; cin >> key;
        if(mp.find(key) != mp.end())
            cout << mp[key] << endl;
        else cout << "NOT FOUND\n";
    }
    return 0;
}