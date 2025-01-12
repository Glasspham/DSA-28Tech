#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool isPrime(int num) {
    if(num <= 1) return false;
    for(int i = 2; i * i <= num; ++i)
        if(num % i == 0)
            return false;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int a[n]; for(int &x : a) cin >> x;
    int cnt = 0;
    for(int i = 0; i < n; ++i) {
        int sum = 0;
        for(int j = i; j < n; ++j) {
            sum += a[j];
            if(isPrime(sum))
                ++cnt;
        }
    }
    cout << cnt;
    return 0;
}