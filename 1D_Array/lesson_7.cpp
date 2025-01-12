#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int k; cin >> k;
    int val = INT_MAX;
    for(int i = 0; i < n - 1; ++i)
        for(int j = i + 1; j < n; ++j)
            if(abs(a[i] - a[j]) < val)
                val = abs(a[i] - a[j]);
    cout << val;
    return 0;
}