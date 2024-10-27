#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, x; cin >> n >> m >> x;
    int a[n], b[m], c[n + m];
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    int i = 0, j = 0, l = 0;
    while(i < n and j < m){
        if(a[i] <= b[j])
            c[l++] = a[i++];
        else c[l++] = b[j++];
    }
    while(i < n) c[l++] = a[i++];
    while(j < m) c[l++] = b[j++];
    cout << c[x];
    return 0;
}