#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num){
    if(num <= 1) return false;
    for(int i = 2; i * i <= num; ++i)
        if(num % i == 0)
            return false;
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    set<int>res;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            int tmp; cin >> tmp;
            if(isPrime(tmp) and (i == j or i == n - 1 - j))
                res.insert(tmp);
        }
    }
    cout << res.size();
    return 0;
}