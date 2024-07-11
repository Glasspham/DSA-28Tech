#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, cnt_max = INT_MIN; cin >> n;
    map<int,int> mp;
    #if 0
    vector<int> res;
    for(int i = 0; i < n; ++i){
        int num; cin >> num;
        mp[num]++;
        if(mp[num] > cnt_max){
            cnt_max = mp[num];
            res.clear();
            res.push_back(num);
        }
        else if(mp[num] == cnt_max) res.push_back(num);
    }
    sort(res.begin(), res.end());
    for(int x : res) cout << x << ' ';
    #endif

    #if 1
    for(int i = 0; i < n; ++i){
        int num; cin >> num;
        mp[num]++;
        if(mp[num] > cnt_max)
            cnt_max = mp[num];
    }
    for(auto it : mp){
        if(it.second == cnt_max)
            cout << it.first << ' ';
    }
    #endif
    return 0;
}