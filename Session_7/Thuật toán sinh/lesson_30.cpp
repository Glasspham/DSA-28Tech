#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int n, a[1001], weight[1001], value[1001], s;
ll res = INT_MIN;

#if 0
void in(){
    ll total_weight = 0, total_value = 0;
    for(int i = 1; i <= n; ++i){
        if(a[i]){
            total_weight += weight[i];
            total_value += value[i];
        }
    }
    if(total_weight <= s) res = max(res, total_value);
}

void Try(int i){
    for(int j = 0; j <= 1; ++j){
        a[i] = j;
        if(i == n) in();
        else Try(i + 1);
    }
}
#endif

#if 1
void Try(int i, ll totalWeight, ll totalValue){
    if(totalWeight > s) return;
    for(int j = 0; j <= 1; ++j){
        a[i] = j;
        if(i == n){
            if(a[i]){
                if(totalWeight + weight[i] <= s)
                    res = max(res, totalValue + value[i]);
            }else{
                if(totalWeight <= s)
                    res = max(res, totalValue);
            }
        }else{
            if(a[i] == 1) Try(i + 1, totalWeight + weight[i], totalValue + value[i]);
            else Try(i + 1, totalWeight, totalValue);
        }
    }
}
#endif

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> s;
    for(int i = 1; i <= n; ++i)
        cin >> weight[i];
    for(int i = 1; i <= n; ++i)
        cin >> value[i];
    // Try(1);
    Try(1, 0, 0);
    cout << res;
    return 0;
}
