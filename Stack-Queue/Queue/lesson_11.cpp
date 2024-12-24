#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    unordered_map<char,int> ndm;
    for(char c : s) ndm[toupper(c)]++;
    priority_queue<int> maxheap;
    for(auto it : ndm) maxheap.push(it.second);
    while(n--) {
        int top = maxheap.top() - 1; maxheap.pop();
        if(top > 0) maxheap.push(top);
    }
    ll res = 0;
    while(!maxheap.empty()) {
        int x = maxheap.top(); maxheap.pop();
        res += (ll)x * x;
    }
    cout << res << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef GLASS
    freopen("../../Text.inp", "r", stdin);
    freopen("../../Text.out", "w", stdout);
    #endif
    int t; cin >> t;
    while(t--) solve();
    return 0;
}


