#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);
    for(int x : a){
        auto it = upper_bound(b, b + n, x);
        if(*it == *(b + n)) cout << '_' << ' ';
        else cout << *it << ' ';
    }
    return 0;
}