#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k; cin >> n >> k;
    int a[n], idx = -1;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        if(k == a[i] and idx == -1)
            idx = i;
    }
    if(idx == -1) cout << "NOT FOUND\n";
    else {
        #if 1
        for(int i = idx; i < n - 1; ++i)
            a[i] = a[i + 1];
        --n;
        for(int i = 0; i < n; ++i) cout << a[i] << ' ';
        #endif
        #if 1
        for(int i = 0; i < n; ++i)
            if(idx != i)
                cout << a[i] << ' ';
        #endif
    }
    return 0;
}