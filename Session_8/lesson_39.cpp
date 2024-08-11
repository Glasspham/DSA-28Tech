#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    map<int,int> mp;
    for(int i = 0; i < n; ++i){
        int num; cin >> num;
        mp[num]++;
    }
    int res = 0;
    for(int i = 0; i < n; ++i){
        int num; cin >> num;
        if(mp[num]){
            mp[num]--;
            res++;
        }
    }
    if(res == n) res -= 1;
    else res += 1;
    cout << res;
    return 0;
}