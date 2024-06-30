#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n);
    for(int i = 0 ; i < n - 3; i++){
        for(int j = i + 1; j < n - 2;++j){
            int l = j + 1, r = n - 1;
            while(l < r){
                if(a[l] + a[r] == k - a[i] - a[j]){
                    cout << "YES\n";
                    cout << i << ' ' << j << ' ' << l << ' ' << r;
                    return 0;
                }
                else if(a[l] + a[r] < k - a[i] - a[j]) ++l;
                else ++r;
            }
        }
    }
    cout << "NO\n";
    return 0;
}