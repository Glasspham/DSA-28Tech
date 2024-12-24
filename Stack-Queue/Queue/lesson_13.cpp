#include<bits/stdc++.h>
using namespace std;
#define ll long long

int BFS(int s) {
    queue<pair<int,int>> qp;
    qp.push({s, 0});
    set<int> se;
    while(!qp.empty()) {
        auto it = qp.front(); qp.pop();
        if(it.first == 1) return it.second;
        if(it.first > 1 and se.count(it.first - 1) == 0) {
            qp.push({it.first - 1, it.second + 1});
            se.insert(it.first - 1);
        }
        int x = it.first;
        for(int i = 2; i <= sqrt(x); ++i) {
            if(x % i == 0) {
                int val = max(i, x / i);
                if(se.count(val) == 0) {
                    qp.push({val, it.second + 1});
                    se.insert(val);
                }
            }
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
        int x; cin >> x;
        cout << BFS(x) << endl;
    }
    return 0;
}