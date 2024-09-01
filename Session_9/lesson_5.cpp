#include<bits/stdc++.h>
using namespace std;

using ll = long long;
ll Fibo[93];
void sieveFibo(){
    Fibo[1] = Fibo[2] = 1;
    for(int i = 3; i < 93; ++i)
        Fibo[i] = Fibo[i - 2] + Fibo[i - 1]; 
}

char FibonacciChar(int n, int k){
    if(n == 1) return 'A';
    if(n == 2) return 'B';
    if(k <= Fibo[n - 2]) return FibonacciChar(n - 2, k);
    else return FibonacciChar(n - 1, k - Fibo[n - 2]);
} 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sieveFibo();
    int n, k; cin >> n >> k;
    cout << FibonacciChar(n,k);
    return 0;
}