#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n][n];
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j)
            cin >> a[i][j];
    for(int i = 0; i < n; ++i) swap(a[i][i], a[i][n - i - 1]);
    
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}