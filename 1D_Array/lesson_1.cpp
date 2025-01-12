#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int cntEven = 0, cntOdd = 0, sumEven = 0, sumOdd = 0;
    for(int i = 0; i < n; ++i) {
        int num; cin >> num;
        if(num % 2 == 0) {
            ++cntEven;
            sumEven += num;
        } else {
            ++cntOdd;
            sumOdd += num;
        }
    }
    cout << cntEven << endl << cntOdd << endl << sumEven << endl << sumOdd;
    return 0;
}