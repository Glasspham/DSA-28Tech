#include<bits/stdc++.h>
using namespace std;
#define ll long long

void printLeft(ll n) {
    if (n < 10) { 
        cout << n;
        return;
    }
    cout << n / (ll)pow(10, (int)log10(n)) << " ";
    printLeft(n % (ll)pow(10, (int)log10(n)));
}

void printRight(ll n) {
    if (n < 10) {
        cout << n;
        return;
    }
    cout << n % 10 << " ";
    printRight(n / 10);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n; cin >> n;
    printLeft(n);
    cout << endl;
    printRight(n);
    return 0;
}