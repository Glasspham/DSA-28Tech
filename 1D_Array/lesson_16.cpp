#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(int n) {
    if(n < 2) return false;
    for(int i = 2; i * i <= n; ++i)
        if(n % i == 0) return false;
    return true;
}

bool isPalindrome(string s) {
    string str = s;
    reverse(s.begin(), s.end());
    return s == str;
}

bool isPerfectSquare(int n) {
    return (n == (int)sqrt(n) * sqrt(n));
}

bool check(int n) {
    int sum = 0;
    while(n) {
        sum += n % 10;
        n /= 10;
    }
    return isPrime(sum);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        if(isPrime(x)) ++cnt1;
        if(isPalindrome(to_string(x))) ++cnt2;
        if(isPerfectSquare(x)) ++cnt3;
        if(check(x)) ++cnt4;
    }
    cout << cnt1 << endl << cnt2 << endl << cnt3 << endl << cnt4;
    return 0;
}