#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m; cin >> n >> m;
    int a[n], b[m];
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    int i = 0, j = 0;
    ll res = 0;
    while(i < n && j < m){
        if(a[i] < b[j]) ++i; 
        else if(a[i] > b[j]) ++j;
        else{
            int cnt1 = 0, cnt2 = 0;
            while(a[i] == b[j])
                ++cnt1, ++i;
            --i;
            while(a[i] == b[j])
                ++cnt2, ++j;
            res += cnt1 * cnt2;
        }
    }
    cout << res << endl;
    return 0;
}