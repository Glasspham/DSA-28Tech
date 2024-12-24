#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<string> res;
void Init() {
    queue<string> q;
    q.push("8");
    while(!q.empty()) {
        string x = q.front(); q.pop();
        if(stoll(x) % 198 == 0) {
            res.push_back(x);
            return;
        }
        res.push_back(x);
        q.push(x + "0");
        q.push(x + "8");
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef GLASS
    freopen("../../Text.inp", "r", stdin);
    freopen("../../Text.out", "w", stdout);
    #endif
    Init();
    int t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        for(string num : res) {
            if(stoll(num) % n == 0) {
                cout << num << endl;
                break;
            }
        }
    }
    return 0;
}