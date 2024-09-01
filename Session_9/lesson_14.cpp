#include<bits/stdc++.h>
using namespace std;

using ll = long long;
ll mod = 1e9 + 7;
struct Matrix{
    ll f[2][2];
};

Matrix operator * (Matrix a, Matrix b){
    Matrix res;
    for(int i = 0; i < 2; ++i){
        for(int j = 0; j < 2; ++j){
            res.f[i][j] = 0;
            for(int l = 0; l < 2; ++l){
                res.f[i][j] += a.f[i][l] * b.f[l][j] % mod;
                res.f[i][j] %= mod;
            }
        }
    }
    return res;
}

Matrix powMod(Matrix a, int n){
    if(n == 1) return a;
    Matrix x = powMod(a, n / 2);
    if(n % 2 == 0) return x * x;
    return x * x * a;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    Matrix a;
    a.f[0][0] = a.f[0][1] = a.f[1][0] = 1;
    a.f[1][1] = 0;
    Matrix res = powMod(a,n);
    cout << res.f[0][1];
    return 0;
}