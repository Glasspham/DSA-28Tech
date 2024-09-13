#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    pair<int,int>a[n];
    for(pair<int,int> &x : a) cin >> x.first >> x.second;
    sort(a, a + n);
    int cnt = 1, tmp = a[0].second;
    for(int i = 1; i < n; ++i){
        if(a[i].first > tmp){
            tmp = a[i].second;
            ++cnt;
        }
    }
    cout << cnt;
    return 0;
}