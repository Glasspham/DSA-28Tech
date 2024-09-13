#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, k; cin >> n >> m >> k;
    int a[n], b[m];
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    sort(a, a + n);
    sort(b, b + m);
    int i = 0, j = 0, cnt = 0;
    while(i < n and j < m){
        if(a[i] - k <= b[j] and b[j] <= a[i] + k)
            ++cnt, ++i, ++j;
        else if(a[i] - k > b[j]) ++j;
        else ++i;
    }
    cout << cnt;
    return 0;
}