#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k, l = 0; cin >> n >> k;
    int a[n]; map<int,int> mp;
    ll res = 0;
    for(int r = 0; r < n; ++r){
        cin >> a[r];
        mp[a[r]]++;
        while(mp.size() > k){
            --mp[a[l]];
            if(mp[a[l]] == 0) mp.erase(a[l]);
            ++l;
        }
        res += r - l + 1;
    }
    cout << res;
    return 0;
}