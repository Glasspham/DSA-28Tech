#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll n_max = 495;
vector<string> save;
void Init() {
    queue<string> q;
    q.push("1");
    while(!q.empty()) {
        string x = q.front(); q.pop();
        if(stoll(x) % n_max == 0) {
            save.push_back(x);
            return;
        }
        save.push_back(x);
        q.push(x + "0");
        q.push(x + "1");
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
        ll x; cin >> x;
        for(int i = 0; i < save.size(); ++i) {
            if(stoll(save[i]) % x == 0){
                cout << save[i] << endl;
                break;    
            }
        }
    }
    return 0;
}