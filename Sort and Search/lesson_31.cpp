#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int s, n; cin >> s >> n;
    pair<int,int> pr[n];
    for(int i = 0; i < n; ++i)
        cin >> pr[i].first >> pr[i].second;
    sort(pr, pr + n);
    for(int i = 0; i < n; ++i){
        if(s <= pr[i].first){
            cout << "NO\n";
            return 0;
        }
        s += pr[i].second;
    }
    cout << "YES\n";
    return 0;
}