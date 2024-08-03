#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    multiset<int> ms;
    for(int i = 0; i < k; ++i)
        ms.insert(a[i]);
    cout << *ms.begin() << ' ' << *ms.rbegin() << endl;
    for(int i = k; i < n; ++i){
        ms.erase(ms.find(a[i - k]));
        ms.insert(a[i]);
        cout << *ms.begin() << ' ' << *ms.rbegin() << endl;
    }
    return 0;
}