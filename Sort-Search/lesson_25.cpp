#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    pair<long long, long long> time[n];

    #if 1
    for(int i = 0; i < n; ++i){
        cin >> time[i].first >> time[i].second;
        time[i].second += time[i].first;
    }
    sort(time, time + n);
    long long res = time[0].second;
    for(int i = 1; i < n; ++i){
        if(time[i].first >= res)
            res = time[i].second;
        else
            res = res + (time[i].second - time[i].first);
    }
    cout << res;
    #endif

    #if 0
    for(auto it : time) cin >> it.first >> it.second;
    sort(time, time + n);
    long long res = time[0].first + time[0].second;
    for(int i = 1; i < n; ++i){
        res = max(res, time[i].first);
        res += time[i].second;
    }
    cout << res;
    #endif
    return 0;
}