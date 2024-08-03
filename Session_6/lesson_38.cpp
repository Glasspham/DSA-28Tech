#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    pair<int,int> times[n];
    for(pair<int,int> &it : times) cin >> it.first >> it.second;
    sort(times, times + n, [](pair<int,int> a, pair<int,int> b){
        return a.second < b.second;
    });
    pair<int,int> curr = times[0];
    int cnt = 1;
    for(int i = 1; i < n; ++i)
        if(curr.second <= times[i].first){
            ++cnt;
            curr = times[i];
        }
    cout << cnt;
    return 0;
}