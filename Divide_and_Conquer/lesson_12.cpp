#include<bits/stdc++.h>
using namespace std;

using ll = long long;
/*
A       B
1 1     1 1
1 0     1 0
A * B
res[0][0] = A[0][0] * B[0][0] + A[0][1] * B[1][0]
res[0][1] = A[0][0] * B[0][1] + A[0][1] * B[1][1]
res[1][0] = A[1][0] * B[0][0] + A[1][1] * B[1][0]
res[1][1] = A[1][0] * B[0][1] + A[1][1] * B[1][1]
*/
ll mod = 1e9 + 7;
struct Matrix{
    ll fibo[2][2];
};

Matrix operator * (Matrix a, Matrix b){
    Matrix c;
    for(int i = 0; i < 2; ++i){
        for(int j = 0; j < 2; ++j){
            c.fibo[i][j] = 0;
            for(int l = 0; l < 2; ++l){
                c.fibo[i][j] += a.fibo[i][l] * b.fibo[l][j] % mod;
                c.fibo[i][j] %= mod;    
            }
        }
    }
    return c;
}

Matrix powMod(Matrix a, int n){
    if(n == 1) return a;
    Matrix x = powMod(a, n / 2);
    if(n % 2 == 0)
        return x * x;
    return x * x * a;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin >> n;
    Matrix a;
    a.fibo[0][0] = a.fibo[0][1] = a.fibo[1][0] = 1;
    a.fibo[1][1] = 0;
    Matrix res = powMod(a,n);
    cout << res.fibo[0][1];
    return 0;
}