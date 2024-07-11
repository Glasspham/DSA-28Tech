#include<bits/stdc++.h>
using namespace std;

map<int, int> mp;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n]; 
    for(int &x : a){
        cin >> x;
        mp[x]++;
    }
    vector<int>vec(a, a + n);

    sort(a, a + n, [](int x, int y){
        if(mp[x] != mp[y])
            return mp[x] > mp[y];
        return x < y;
    });
    for(int x : a) cout << x << ' ';
    cout << endl;
    stable_sort(vec.begin(), vec.end(),[](int x, int y){
        return mp[x] > mp[y];
    });
    for(int x : vec)
        if(mp[x])
            while(mp[x]){
                cout << x << ' ';
                mp[x]--;
            }
    return 0;
}