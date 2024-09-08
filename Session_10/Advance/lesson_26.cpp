#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n]; for(int &x : a) cin >> x;
    vector<int> res;
    for(int i = 0; i < n; ++i){
        auto it = lower_bound(res.begin(), res.end(), a[i]);
        if(it == res.end())
            res.push_back(a[i]);
        else *it = a[i];
    }
    cout << res.size();
    return 0;
}