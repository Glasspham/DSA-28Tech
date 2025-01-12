#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    vector<int> v(n);
    for(int &x : v) cin >> x;
    sort(v.begin(), v.end());
    for(auto it = v.begin(); it != v.end(); ++it)
        cout << *it << ' ';
    cout << endl;
    for(auto it = v.rbegin(); it != v.rend(); ++it)
        cout << *it << ' ';
    return 0;
}