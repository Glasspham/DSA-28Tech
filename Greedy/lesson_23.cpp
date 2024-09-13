#include<bits/stdc++.h>
using namespace std;

using ll = long long;

bool isPrime(int num){
    if(num <= 1) return false;
    if(num <= 3) return true;
    if(num % 2 == 0 || num % 3 == 0) return false;
    for(int i = 5; i * i <= num; i += 6)
        if(num % i == 0 || num % (i + 2) == 0)
            return false;
    return true;
}

bool check(int n){
    // e : số lượng ước
    // p : tổng số mũ của các ước
    int e = 0, p = 0;
    for(int i = 2; i <= sqrt(n); ++i){
        if(n % i == 0){
            ++e;
            while(n % i == 0){
                n /= i;
                p++;
            }
        }
    }
    if(n != 1){
        e++;
        p++;
    }
    if(e >= 3) return true;
    if(e == 2 and p >= 4) return true;
    if(e == 1 and p >= 6) return true;
    return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    if(isPrime(n)) cout << "NO\n"; 
    else{
        if(check(n)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}