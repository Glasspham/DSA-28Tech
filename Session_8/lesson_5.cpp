#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n], b[n]; for(int i = 0; i < n; ++i){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);
    for(int i = 0; i < n; ++i){
        if(a[i] != b[i] and a[n - i - 1] != b[i]){
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}