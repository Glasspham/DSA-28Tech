#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        if(i != 0)
            a[i] += a[i - 1];
        cout << a[i] << ' ';
    }
    return 0;
}