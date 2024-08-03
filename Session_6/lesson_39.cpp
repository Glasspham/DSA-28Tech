#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n]; for(int &x : a) cin >> x;
    sort(a, a + n);
    long long value_min = 1;
    for(int i = 0; i < n; ++i){
        if(value_min < a[i]) break;
        value_min += a[i];
    }
    cout << value_min;
    return 0;
}