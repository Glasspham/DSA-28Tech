#include<bits/stdc++.h>
using namespace std;
long long a[101][101], f[101][101];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j)
            cin >> a[i][j];

    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j)
            f[i][j] = max({f[i - 1][j - 1], f[i - 1][j], f[i - 1][j + 1]}) + a[i][j];
            
    cout << *max_element(f[n - 1], f[n - 1] + n);
    return 0;
}