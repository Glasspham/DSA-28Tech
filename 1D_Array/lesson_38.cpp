#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int a[n];
    int sum2 = 0, sum3 = 0, sum4 = 0;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        if(i < 2) sum2 += a[i];
        if(i < 3) sum3 += a[i];
        if(i < 4) sum4 += a[i];
    }
    cout << sum2 << ' ';
    for(int i = 2; i < n; ++i) {
        sum2 += a[i] - a[i - 2];
        cout << sum2 << ' ';
    }
    cout << endl << sum3 << ' ';
    for(int i = 3; i < n; ++i) {
        sum3 += a[i] - a[i - 3];
        cout << sum3 << ' ';
    }
    cout << endl << sum4 << ' ';
    for(int i = 4; i < n; ++i) {
        sum4 += a[i] - a[i - 4];
        cout << sum4 << ' ';
    }
    return 0;
}