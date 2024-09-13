#include<bits/stdc++.h>
using namespace std;

using ll = long long;
bool check(int a, int b, int c){
    return a + b > c and a + c > b and b + c > a;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n]; for(int &x : a) cin >> x;
    sort(a, a + n);
    ll max_per = 0;
    int x = -1, y = -1, z = -1;
    for(int i = 0; i < n - 2; ++i){
        for(int j = i + 1; j < n - 1; ++j){
            for(int l = j + 1; l < n; ++l){
                if(check(a[i], a[j], a[l])){
                    ll tmp = (ll)a[i] + a[j] + a[l];
                    if(tmp > max_per){
                        max_per = tmp;
                        x = a[i], y = a[j], z = a[l];
                    }else if(tmp == max_per){
                        if(z < a[l]) x = a[i], y = a[j], z = a[l]; // So 2 canh lon nhat truoc
                        else if(z == a[l] and a[i] > x) // So 2 canh nho nhat trong moi cach lay
                            x = a[i], y = a[j], z = a[l];
                    }
                }
            }
        }
    }
    if(x == -1) cout << -1;
    else cout << x << ' ' << y << ' ' << z;
    return 0;
}