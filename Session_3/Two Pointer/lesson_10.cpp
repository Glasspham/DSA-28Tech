#include<bits/stdc++.h>
using namespace std;

#if 0 // Binary search
bool BinarySearch(int a[], int n, int x){
    sort(a, a + n);
    int l = 0, r = n - 1;
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m] == x) return 1;
        else if(a[m] > x) r = m - 1;
        else l = m + 1;
    }
    return 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    bool f = true;
    for(int i = 0; i < n; ++i){    
        if(BinarySearch(a, n, k - a[i])){
            cout << "YES\n";
            f = false;
            return 0;
        }
    }
    if(f) cout << "NO\n";
    return 0;
}
#endif

#if 1 // Two Pont
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n);
    int l  = 0, r = n - 1;
    while (l < r){
        if(a[l] + a[r] == k){
            cout << "YES\n";
            return 0;
        }
        else if(a[l] + a[r] > k) --r;
        else ++l;
    }
    cout << "NO\n";
    return 0;
}
#endif