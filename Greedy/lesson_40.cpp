#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k; cin >> n >> k;
    int a[n]; for(int &x : a) cin >> x;
    int count = 0, price = 0;
    sort(a, a + n, greater<int>());
    for(int i = 0; i < n; ++i){
        if(i % k == 0 and i != 0)
            ++count;
        price += a[i] * (count + 1);
    }
    cout << price;
    return 0;
}