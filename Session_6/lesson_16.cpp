#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<pair<int,int>> times;
    for(int i = 0; i < n; ++i){
        int st, en; cin >> st >> en;
        times.push_back({st,en});
    }
    sort(times.begin(), times.end(), [](pair<int,int> a, pair<int,int> b){
        return a.second < b.second;
    });
    int cnt = 1, en = times[0].second;
    for(int i = 1; i < n; ++i){
        if(times[i].first >= en){
            en = times[i].second;
            ++cnt;
        }
    }
    cout << cnt;
    return 0;
}