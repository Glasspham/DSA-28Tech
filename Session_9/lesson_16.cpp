#include<bits/stdc++.h>
using namespace std;

using ll = long long;
ll mod = 1e9 + 7;
struct Matrix{
    int n;
    vector<vector<int>> matrix;
};

Matrix operator* (Matrix a, Matrix b){
    Matrix res;
    res.n = a.n;
    res.matrix.resize(res.n, vector<int>(res.n,0));
    for(int i = 0; i < res.n; ++i){
        for(int j = 0; j < res.n; ++j){
            for(int l = 0; l < res.n; ++l){
                res.matrix[i][j] += a.matrix[i][l] * b.matrix[l][j] % mod;
                res.matrix[i][j] %= mod;
            }
        }
    }
    return res;
}

Matrix powMod(Matrix a, int k){
    if(k == 1) return a;
    Matrix res =  powMod(a, k / 2);
    if(k % 2 == 0) return res * res;
    return res * res * a;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Matrix a; int k;
    cin >> a.n >> k;
    a.matrix.resize(a.n,vector<int>(a.n,0));
    for(int i = 0; i < a.n; ++i)
        for(int j = 0; j < a.n; ++j)
            cin >> a.matrix[i][j];
    
    Matrix res = powMod(a,k);
    ll sum  = 0;
    for(int i = 0; i < a.n; ++i)
        sum += res.matrix[i][a.n - 1];
    cout << sum;
    return 0;
}