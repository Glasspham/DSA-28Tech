#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int a[1001], n, ok = 1;
void sinh(){
    int i = n;
    while(i >= 1 and a[i]) a[i--] = 0;
    if(i == 0) ok = 0;
    else a[i] = 1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    int b[n + 1];
    for(int i = 1; i <= n; ++i) cin >> b[i];
    int res = INT_MAX;
    while(ok){
        int total = 0;
        for(int i = 1; i <= n; ++i){
            if(a[i]) total += b[i];
            else total -= b[i];
        }
        res = min(res, abs(total));
        sinh();
    }
    cout << res;
    return 0;
}