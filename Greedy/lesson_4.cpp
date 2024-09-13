#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k; cin >> n >> k;
    int sum = 0, sum1 = 0;
    int a[n]; for(int &x : a){
        cin >> x;
        sum += x;
    }
    sort(a, a + n);
    k = min(k, n - k);
    for(int i = 0; i < k; ++i) sum1 += a[i];
    cout << abs(sum - 2 * sum1);
    return 0;
}