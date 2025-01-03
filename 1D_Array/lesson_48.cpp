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
    int t; cin >> t;
    for(int u = 1; u <= t; ++u) {
        vector<vector<int>> res;
        vector<int> tmp;
        int n; cin >> n;
        int a[n + 1], len = 0;
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
            if(i == 0 or a[i] > a[i - 1]) tmp.push_back(a[i]);
            else {
                if(len < tmp.size()) {
                    len = tmp.size();
                    res.clear();
                    res.push_back(tmp);
                } else if(len == tmp.size())
                    res.push_back(tmp);
                tmp.clear();
                tmp.push_back(a[i]);
            }
        }
        if(!tmp.empty()) {
            if(len < tmp.size()) {
                len = tmp.size();
                res.clear();
                res.push_back(tmp);
            } else if(len == tmp.size()) 
                res.push_back(tmp);
        }
        cout << "Test #" << u << " :\n" << len << endl;
        for(auto v : res) {
            for(auto it : v)
                cout << it << ' ';
            cout << endl;
        }
    }
    return 0;
}