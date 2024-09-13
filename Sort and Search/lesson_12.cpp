#include<bits/stdc++.h>
using namespace std;

void MergeSort(int a[], int n, int b[], int m){
    int i = 0, j = 0, cnt = 0;
    while(i < n or j < m){
        if(a[i] > b[j]) ++cnt, ++i, ++j;
        else ++i;
    }
    cout << cnt;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m; cin >> n >> m;
    int a[n], b[m];
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    sort(a, a + n), sort(b, b + m);
    MergeSort(a, n, b, m);
    return 0;
}