#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n <= 1) return false;
    for(int i = 2; i * i <= n; i++)
        if(n % i == 0) 
            return false;
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m; cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            cin >> a[i][j];
            
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j)
            if(isPrime(a[i][j]))
                cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}