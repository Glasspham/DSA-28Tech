#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k; cin >> n >> k;
    ll ans = 0;
    vector<int>save;
    for(int i = 0; i < n; ++i){
        int l,t; cin >> l >> t;
        if(t == 0) ans += l;
        else save.push_back(l);
    }
    sort(save.begin(), save.end(), greater<int>());
    for(int i = 0; i < save.size(); ++i){
        if(i < k) ans += save[i];
        else ans -= save[i];
    }
    cout << ans;
    return 0;
}