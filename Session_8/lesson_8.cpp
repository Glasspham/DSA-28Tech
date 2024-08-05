#include<bits/stdc++.h>
using namespace std;

using ll = long long;
struct Job{
    int id, deadline, profit;
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    Job a[n];
    for(Job &x : a) cin >> x.id >> x.deadline >> x.profit;
    sort(a, a + n, [](Job x, Job y){
        return x.deadline > y.deadline;
    });
    priority_queue<int> pq;
    int day_curr = a[0].deadline, idx = 0;
    ll res = 0;
    while(day_curr >= 1){
        while(idx < n and a[idx].deadline >= day_curr)
            pq.push(a[idx++].profit);
        if(!pq.empty()) {
            res += pq.top();
            pq.pop();
        }
        --day_curr;
    }
    cout << res;
    return 0;
}