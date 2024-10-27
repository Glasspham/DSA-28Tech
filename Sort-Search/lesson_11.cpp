#include<bits/stdc++.h>
using namespace std;

void MergeSort(int b[], int n, int c[], int m){
    int i = 0, j = 0;

    while(i < n or j < m){
        if(b[i] <= c[j])
            cout << "b" << ++i << ' ';
        else
            cout << "c" << ++j << ' ';
    }
    while(i < n)
        cout << "b" << ++i << ' ';
    while(j < m)
        cout << "c" << ++j << ' ';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m; cin >> n >> m;
    int b[n], c[m];
    for(int &x : b) cin >> x;
    for(int &x : c) cin >> x;
    MergeSort(b, n, c, m);
    return 0;
}