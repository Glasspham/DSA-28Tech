#include<bits/stdc++.h>
using namespace std;

/*
[1]
[1 2 1]
[1 2 1 3 1 2 1]
[1 2 1 3 1 2 1 4 1 2 1 3 1 2 1]
[1 2 1 3 1 2 1 4 1 2 1 3 1 2 1 5 1 2 1 3 1 2 1 4 1 2 1 3 1 2 1]

n = 5, k = 28
Vị trí tìm lớn hơn vị trí trung tâm (2^(n - 1))
thì vị trí tương ứng mà ở bên phải vị trung tâm là k - (2^(n - 1))
nếu vị trí k == (2^(n - 1)) thì đó là kết quả
*/
using ll = long long;
int tinh(int n, int k){
    ll x = pow(2, n - 1);
    if(x == k) return n;
    if(k > x) return tinh(n - 1, k - x);
    return tinh(n - 1, k);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k; cin >> n >> k;
    cout << tinh(n,k);
    return 0;
}