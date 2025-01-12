#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i = 0; i < n; ++i) {
        int num; cin >> num;
        pq.push(num);
    }
    ll total = 0;
    while(pq.size() > 1) {
        int top1 = pq.top(); pq.pop();
        int top2 = pq.top(); pq.pop();
        total += top1 + top2;
        pq.push(top1 + top2);
    }
    cout << total << endl;
    return 0;
}