#include<bits/stdc++.h>
using namespace std;

using ll = long long;
struct customer{
    int id, order_time, prep;
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    customer a[n];
    for(int i = 0; i < n; ++i){
        a[i].id = i + 1;
        cin >> a[i].order_time >> a[i].prep;
    }
    stable_sort(a, a + n, [](customer x, customer y)->bool{
        return x.order_time + x.prep < y.order_time + y.prep;
    });
    for(customer x : a)cout << x.id << ' ';
    return 0;
}