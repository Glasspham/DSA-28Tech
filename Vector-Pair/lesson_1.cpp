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
    vector<int> v;
    int n; cin >> n;
    for(int i = 0; i < n; ++i) {
        int sl; cin >> sl;
        if(sl == 1) {
            int num; cin >> num;
            v.push_back(num);
        } else if(!v.empty())v.pop_back();
    }
    if(!v.empty())
        for(int x : v) cout << x << ' ';
    else cout << "EMPTY\n"; 
    return 0;
}