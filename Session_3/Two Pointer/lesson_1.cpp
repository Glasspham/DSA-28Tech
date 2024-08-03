#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m; cin >> n >> m;
    int a[n],b[m], res[n + m];
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    int i = 0, j = 0, idx = 0;
    while(i < n && j < m){
        if(a[i] < b[j]) res[idx++] = a[i++];
        else res[idx++] = b[j++];
    }
    while(i < n) res[idx++] = a[i++];
    while(j < m) res[idx++] = b[j++];
    for(int x : res) cout << x << ' ';
    return 0;
}