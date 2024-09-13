#include<bits/stdc++.h>
using namespace std;

using ll = long long;

ll Fibo[93];
void sieve(){
    Fibo[1] = Fibo[2] = 1;
    for(int i = 3; i < 93; ++i)
        Fibo[i] = Fibo[i - 2] + Fibo[i - 1];
}

int Fibonacci(int n, int k){
    if(n == 1) return 0;
    if(n == 2) return 1;
    if(k <= Fibo[n - 2]) return Fibonacci(n - 2, k);
    return Fibonacci(n - 1, k - Fibo[n - 2]);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve();
    int n, k; cin >> n >> k;
    cout << Fibonacci(n, k);
    return 0;
}