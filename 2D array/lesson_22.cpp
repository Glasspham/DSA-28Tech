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
    
    for(int i = 0; i < n; ++i){
        if(i % 2 == 1)
            reverse(a[i], a[i] + n);
        for(int num : a[i])
            cout << num << ' ';
        cout << endl;
    }
    return 0;
}