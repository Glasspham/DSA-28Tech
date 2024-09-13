#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k; cin >> n >> k;
    int a[n], cnt = 0;
    for(int &x : a) cin >> x;
    map<int, int> mp;
    int l = 0, r = 0, res = 0;
    for(; r < n; ++r){
        mp[a[r]]++;
        while(mp.size() > k){
            mp[a[l]]--;
            if(mp[a[l]] == 0) mp.erase(a[l]);
            ++l;
        }
        res += r - l + 1;
    }
    return 0;
}