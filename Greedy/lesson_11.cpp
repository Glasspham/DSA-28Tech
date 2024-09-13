#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int k; cin >> k;
        string s; cin >> s;
        int alplatbet[256] = {0};
        for(char c : s) ++alplatbet[c];
        priority_queue<int>pq;
        for(int x : alplatbet) if(x) pq.push(x);
        while(k--){
            int top = pq.top(); pq.pop();
            top -= 1; pq.push(top);
        }
        ll res = 0;
        while(!pq.empty()){
            res += pq.top() * pq.top();
            pq.pop();
        }
        cout << res << endl;
    }
    return 0;
}