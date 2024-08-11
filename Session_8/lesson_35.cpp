#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k; cin >> n >> k;
    int a[n + 1], pos[n + 1];
    vector<int>v;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        pos[a[i]] = i;
        if(a[i] != n - i + 1)
            v.push_back(a[i]);
    }
    sort(v.begin(), v.end(), greater<int>());
    for(int i = 0; i < v.size(); ++i){
        if(k == 0) break;
        int x = v[i], pos1 = pos[x];
        int y = a[n - x + 1], pos2 = pos[y];
        if(pos1 != pos2){
            swap(a[pos1], a[pos2]);
            pos[x] = pos2;
            pos[y] = pos1;
            --k;
        }
    }
    for(int i = 1; i <= n; ++i)
        cout << a[i] << ' ';
    return 0;
}