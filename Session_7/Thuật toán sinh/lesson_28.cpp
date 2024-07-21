#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int x, y, z, t, a[1001];
ll res = INT_MIN;

void TinhTong(){
    ll total = x;
    if(a[1]) total += y;
    else total -= y;
    if(a[2]) total += z;
    else total -= z;
    if(a[3]) total += t;
    else total -= t;
    res = max(res, total);
}

void Try(int i){
    for(int j = 0; j <= 1; ++j){
        a[i] = j;
        if(i == 3) TinhTong();
        else Try(i + 1);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> x >> y >> z >> t;
    Try(1);
    cout << res;
    return 0;
}