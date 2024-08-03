#include<bits/stdc++.h>
using namespace std;

#if 0 // Cách 1
// 1 2 3 4 5 thì median = 3 ta có (n - 1) / 2
// 1 2 3 4 thì median = 2 ta có (n - 1) / 2
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    multiset<int> ms;
    for(int i = 0; i < k; ++i) ms.insert(a[i]);
    auto it = ms.begin();
    for(int i = 0; i < (k - 1)/2; ++i) ++it;
    cout << *it << ' ';

    #if 0 // Chưa biết có đúng không
    for(int i = k; i < n; ++i){
        ms.erase(ms.find(a[i - k]));
        ms.insert(a[i]);
        auto it = ms.begin();
        for(int i = 0; i < (k - 1)/2; ++i) ++it;
        cout << *it << ' ';
    }
    #endif

    #if 1
    if(k % 2 == 1){
        for(int i = k; i < n; ++i){
            ms.insert(a[i]);
            if(a[i] < *it) --it;
            auto it2 = ms.lower_bound(a[i - k]);
            if(*it2 <= *it) ++it;
            ms.erase(it2);
            cout << *it << ' ';
        }
    }
    else{
        for(int i = k; i < n; ++i){
            ms.insert(a[i]);
            if(a[i] >= *it) ++it;
            auto it2 = ms.lower_bound(a[i - k]);
            if(*it2 > *it || it2 == it) --it;
            ms.erase(it2);
            cout << *it << ' ';
        }
    }
    #endif
    return 0;
}
#endif

#if 1 // Cách 2
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    multiset<int> ms;
    for(int i = 0; i < k; ++i) ms.insert(a[i]);
    auto it = next(ms.begin(), (k - 1) / 2);
    for(int i = k; i < n; ++i){
        cout << *it << ' ';
        ms.insert(a[i]);
        if(a[i] < *it) --it;
        if(a[i - k] <= *it) ++it;
        ms.erase(ms.lower_bound(a[i - k]));
    }
    cout << *it;
    return 0;
}
#endif