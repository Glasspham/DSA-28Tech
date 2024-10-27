#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int n, k, a[100], used[100], sum = 0, cnt = 0, ok = 0;

void Try(int idx, int total){
    if(cnt == k){
        ok = 1;
        return;
    }
    for(int j = idx; j <= n; ++j){
        if(!used[j] and total + a[j] <= sum){
            used[j] = 1;
            if(total + a[j] == sum){
                ++cnt;
                Try(1, 0);
            }
            else Try(j + 1, total + a[j]);
            used[j] = 0;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        sum += a[i];
    }
    if(sum % k == 0){
        sum /= k;
        if(*max_element(a, a + n) > sum){
            cout << "0\n";
            return 0;
        }
        Try(1, 0);
        cout << ok << endl;
    }else cout << "0\n";
    return 0;
}