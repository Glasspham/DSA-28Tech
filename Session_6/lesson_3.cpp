#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int Total(string num){
    int total = 0;
    for(int i = 0; i < num.size(); ++i)
        total += (num[i] + '0');
    return total;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<pair<int,ll>> vp;
    for(int i = 0; i < n; ++i){
        string number; cin >> number;
        vp.push_back({Total(number), stoi(number)});
    }
    sort(vp.begin(), vp.end(),[](pair<int,ll> a, pair<int,ll> b){
        if(a.first != b.first) return a.first < b.first;
        return a.second < b.second;
    });
    for(auto it : vp) cout << it.second << ' ';
    return 0;
}