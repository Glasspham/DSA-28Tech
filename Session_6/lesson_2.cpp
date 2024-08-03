#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n, [](int a, int b){
        return abs(a) < abs(b);
    });
    for(int x : a) cout << x << ' ';
    return 0;
}