#include<bits/stdc++.h>
using namespace std;

using ll = long long;
ll mod = 1e9 + 7;
ll sieveFibonacci[1000001];
struct Matrix{
    ll dp[2][2];
};

Matrix operator * (Matrix a, Matrix b){
    Matrix res;
    for(int i = 0; i < 2; ++i){
        for(int j = 0; j < 2; ++j){
            res.dp[i][j] = 0;
            for(int l = 0; l < 2; ++l){
                res.dp[i][j] += a.dp[i][l] * b.dp[l][j];
                res.dp[i][j] %= mod;
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
    ll n; cin >> n;
    Matrix a;
    a.dp[0][0] = a.dp[0][1] = a.dp[1][0] = 1;
    a.dp[1][1] = 0;
    Matrix res = powMod(a,n);
    cout << res.dp[0][1];
    return 0;
}