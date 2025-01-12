#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<pair<int,int>> vp;
    int n; cin >> n;
    for(int i = 0; i < n; ++i) {
        int num; cin >> num;
        bool f = true;
        for(auto &p : vp) {
            if(p.first == num) {
                ++p.second;
                f = false;
                break;
            }
        }
        if(f) vp.push_back({num, 1});
    }
    for(auto it : vp) cout << it.first << ' ' << it.second << endl;
    return 0;
}