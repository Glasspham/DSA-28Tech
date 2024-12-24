#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll _max;
vector<ll> save;
void Solve() {
    queue<string> q;
    q.push("1"); q.push("2"); q.push("3"); q.push("4"); q.push("5");
    while(!q.empty()) {
        string num = q.front(); q.pop();
        ll value = stoll(num);
        if(value > _max) return;
        save.push_back(value);
        for(char ch = '0'; ch <= '5'; ++ch)
            if(num.find(ch) == string::npos)
                q.push(num + ch);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef GLASS
    freopen("../../Text.inp", "r", stdin);
    freopen("../../Text.out", "w", stdout);
    #endif
    int n; cin >> n;
    vector<pair<ll,ll>> bd;
    for(int i = 0; i < n; ++i) {
        ll x, y; cin >> x >> y;
        if(x > _max) _max = x;
        if(y > _max) _max = y;
        bd.push_back({x, y});
    }
    Solve();
    for(int i = 0; i < n; ++i) {
        int cnt = 0;
        for(auto it : save) {
            if(bd[i].first <= it and it <= bd[i].second)
                ++cnt;
            else if(it > bd[i].second) break;
        }
        cout << cnt << endl;
    }
    return 0;
}