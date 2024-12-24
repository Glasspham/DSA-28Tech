#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<string>res;
void Init(){
    queue<string>q;
    q.push("6"), q.push("8");
    res.push_back("6"), res.push_back("8");
    while(q.front().size() < 15){
        string top = q.front(); q.pop();
        q.push(top + "6"), q.push(top + "8");
        res.push_back(top + "6"), res.push_back(top + "8");
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
    while(t--){
        int n; cin >> n;
        vector<string>tmp;
        copy_if(res.begin(), res.end(), back_inserter(tmp), [n](string s){
            return s.size() <= n;
        });
        cout << tmp.size() << endl;
        for(string i : tmp) cout << i << ' ';
        cout << endl;
    }
    return 0;
}