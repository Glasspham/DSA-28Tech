#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int mod = 1e9 + 7;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    priority_queue<ll>pq;
    for(int i = 0; i < n; ++i){
        int num; cin >> num;
        pq.push(num);
    }
    ll sum = 0;
    while(pq.size() > 1){
        int top1 = pq.top(); pq.pop();
        int top2 = pq.top(); pq.pop();
        sum += top2 + top1;
        sum %= mod;
        pq.push(top1 + top2);
    }
    cout << sum;
    return 0;
}