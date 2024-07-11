#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    map<int,int>mp;
    int a[n], l = 0, res = INT_MIN; 
    for(int r = 0; r < n; ++r){ 
        cin >> a[r];
        mp[a[r]]++;
        while(mp[a[r]] == 2){
            --mp[a[l]];
            ++l;
        }
        res = max(res, r - l + 1);
    }
    cout << res;
    return 0;
}