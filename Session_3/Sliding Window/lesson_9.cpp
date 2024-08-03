#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k; cin >> n >> k;
    int a[n], curr_sum = 0;
    for(int &x : a) {
        cin >> x;
        curr_sum += x;
    }
    if(curr_sum < k) cout << -1;
    else{
        int min0 = k, curr_sum0 = 0;
        for(int i = 0; i < k; ++i)
            if(a[i] == 0) curr_sum0++;
        min0 = min(min0, curr_sum0);
        for(int i = k; i < n; ++i){
            if(a[i] == 0) curr_sum0++;
            if(a[i - k] == 0) curr_sum--;
            min0 = min(min0, curr_sum0);
        }
        cout << min0;
    }
    return 0;
}