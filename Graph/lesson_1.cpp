#include<bits/stdc++.h>
using namespace std;

using ll = long long;
vector<int> a[1005];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m; cin >> n >> m;
    for(int i = 0; i < m; ++i){
        int x, y; cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    for(int i = 1; i <= n; ++i){
        sort(a[i].begin(), a[i].end());
        cout << i << " : ";
        for(int x : a[i])
            cout << x << ' ';
        cout << endl;
    }
    return 0;
}