#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m; cin >> n >> m;
    map<int,int> mp;
    int a[n];
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        mp[a[i]] = 1;
    }
    for(int i = 0; i < m; ++i) {
        int x; cin >> x;
        if(mp[x] == 1)
            mp[x] = 2;
    }
    for(int i = 0; i < n; ++i)
        if(mp[a[i]] == 2)
            cout << a[i] << ' ';
    return 0;
}