#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k; cin >> n >> k;
    k %= n;
    string str1, str2;
    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        if(i < n - k) str2 += to_string(x) + ' ';
        else str1 += to_string(x) + ' ';
    }
    cout << str1 + str2;
    return 0;
}