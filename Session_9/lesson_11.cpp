#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x; cin >> n >> x;
    int a[n]; for(int &x : a) cin >> x;
    if(binary_search(a, a + n, x))
        cout << "YES\n";
    else cout << "NO\n";
    return 0;
}