#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<pair<int,int>> vp;
    for(int i = 0; i < n; ++i){
        int st, en; cin >> st >> en;
        vp.push_back({st,1});
        vp.push_back({en,-1});
    }
    sort(vp.begin(), vp.end());
    int client = 0, max_client = 0;
    for(int i = 0; i < n; ++i){
        client += vp[i].second;
        max_client = max(max_client, client);
    }
    cout << max_client;
    return 0;
}