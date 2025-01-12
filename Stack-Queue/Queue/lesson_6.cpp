#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll n_max = 1e18;

vector<string> save;
void Init() {
    queue<string> q;
    q.push("1");
    while(!q.empty()) {
        string x = q.front(); q.pop();
        if(stoll(x) > n_max) return;
        save.push_back(x);
        q.push(x + "0");
        q.push(x + "1");
    }
}

int main() { 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    Init();
    int t; cin >> t;
    while(t--) {
        ll x; cin >> x;
        for(int i = 0; i < save.size(); ++i) {
            if(stoll(save[i]) > x){
                cout << i << endl;
                break;    
            }
        }
    }
    return 0;
}