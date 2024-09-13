#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, s, m; cin >> n >> s >> m;
    int song = s * m;
    int soNgayDiCho = s - s / 7;
    int tongLuongThucMua = soNgayDiCho * n;
    if(tongLuongThucMua < song) cout << -1;
    else cout << (song + n - 1) / n;
    return 0;
}