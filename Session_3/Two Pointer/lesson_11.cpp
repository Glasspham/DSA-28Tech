#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n);
    for(int i = 0 ; i < n - 2; i++){
        int l = i + 1, r = n - 1;
        while(l < r){
            if(a[l] + a[r] == k - a[i]){
                cout << "YES\n";
                return 0;
            }
            else if(a[l] + a[r] < k - a[i]) ++l;
            else --r;
        }
    }
    cout << "NO\n";
    return 0;
}