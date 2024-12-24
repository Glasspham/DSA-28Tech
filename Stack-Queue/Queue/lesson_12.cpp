#include<bits/stdc++.h>
using namespace std;
#define ll long long

int BFS(int s, int t) {
    queue<pair<int,int>> qp;
    qp.push({s, 0});
    set<int> se;
    while(!qp.empty()) {
        auto it = qp.front(); qp.pop();
        if(it.first == t) return it.second;
        if(it.first > 1 and se.count(it.first - 1) == 0) {
            qp.push({it.first - 1, it.second + 1});
            se.insert(it.first - 1);
        }
        if(it.first < t and se.count(it.first * 2) == 0) {
            qp.push({it.first * 2, it.second + 1});
            se.insert(it.first * 2);
        }
    } return - 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef GLASS
    freopen("../../Text.inp", "r", stdin);
    freopen("../../Text.out", "w", stdout);
    #endif
    int t; cin >> t;
    while(t--) {
        int x, y; cin >> x >> y;
        cout << BFS(x, y) << endl;
    }
    return 0;
}