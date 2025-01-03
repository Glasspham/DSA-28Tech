#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef GLASS
    freopen("../Text.inp", "r", stdin);
    freopen("../Text.out", "w", stdout);
    #endif
    int n, cntOdd = 0, cntEven = 0;
    while(cin >> n) {
        if(n % 2 == 0) ++cntEven;
        else ++cntOdd;
    }
    if(cntEven > cntOdd) cout << "CHAN";
    else if(cntEven < cntOdd) cout << "LE";
    else cout << "CHANLE";
    return 0;
}