#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int n, a[101], sum = 0, ok = 0;
void Try(int idx, int sum_curr){    
    if(sum_curr == sum){
        ok = 1;
        return;
    }
    if(sum_curr > sum) return;
    for(int j = idx; j <= n; ++j) Try(j + 1, sum_curr + a[j]);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        sum += a[i];
    }
    if(sum % 2 != 0){
        cout << 0;
        return 0;
    }
    sum /= 2;
    sort(a + 1, a + n + 1);
    Try(1,0);
    cout << ok;
    return 0;
}