#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int a[1001], n, final = 1;
void sinh(){
    int i = n - 1;
    while(i >= 1 and a[i] > a[i + 1]) --i;
    if(i == 0) final = 0;
    else{
        int j = n;
        while(a[i] > a[j]) --j;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    #if 0 // Hàm có sẵn next_permutation()
    int b[n]; for(int &x : b) cin >> x;
    next_permutation(b, b + n);
    for(int x : b) cout << x << ' ';
    #endif

    #if 1 // Tự viết hàm
    for(int i = 1; i <= n; ++i) cin >> a[i];
    sinh();
    for(int i = 1; i <= n; ++i) cout << a[i] << ' ';
    #endif
    return 0;
}