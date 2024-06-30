#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k; cin >> n >> k;
    int a[n], cnt = 0;
    for(int &x : a) cin >> x;
    multiset<int> ms;
    int l = 0, r = 0, res = 0;
    for(; r < n; ++r){
        ms.insert(a[r]);
        while (ms.size() >= 1 && *ms.rbegin() - *ms.begin() > k){
            auto it = ms.find(a[l]);
            ms.erase(it);
            ++l;
        }
        res += r - l + 1;
    }
    cout << res << endl;
    return 0;
}
/*
10 1
2 3 1 3 1 4 1 3 1 2
Số cặp là
2
2 3
3
1
3
1
4
1
3
1
2
1 2
*/