#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, l; cin >> n >> l;
    int lanterns[n];
    for(int &x : lanterns) cin >> x;
    sort(lanterns, lanterns + n);
    double max_distance = max(lanterns[0], l - lanterns[n - 1]);
    for(int i = 1; i < n; ++i)
        max_distance = max(max_distance, (lanterns[i] - lanterns[i - 1]) / 2.0);
    cout << fixed << setprecision(10) << max_distance;
    return 0;
}