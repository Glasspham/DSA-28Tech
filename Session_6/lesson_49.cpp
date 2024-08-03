#include<bits/stdc++.h>
using namespace std;

using ll = long long;

bool check(int a[], int n, int k, double len){
    ll dem = 0;
    for (int i = 0; i < n; i++)
        dem += (int)(a[i] / len);
    return dem >= k;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k; cin >> n >> k;
    int a[n]; for(int &x : a) cin >> x;
    double left = 0, right = 9e18, res = -1;
    for(int i = 0; i < 100; ++i){
        double mid = (left + right) / 2;
        if(check(a, n, k, mid)){
            res = mid;
            left = mid;
        }
        else right = mid;
    }
    cout << fixed << setprecision(6) << res;
    return 0;
}