#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<string> a;
void solve() {
    queue<string> q;
    q.push("6");
    q.push("8");
    while(!q.empty()) {
        string x = q.front(); q.pop();
        a.push_back(x);
        if(x.size() == 18) break;
        q.push(x + "6");
        q.push(x + "8");
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<string> res;
        copy_if(a.begin(), a.end(), back_inserter(res), [n](string s){
            return s.size() <= n;
        });
        for(auto it = res.rbegin(); it != res.rend(); ++it)
            cout << *it << ' ';
        cout << endl;
    }
    return 0;
}