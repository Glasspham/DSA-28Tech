#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, i = 0, cnt = 0; cin >> n;
    int moneys[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    while(n){
        cnt += n / moneys[i];
        n %= moneys[i];
        ++i;
    }
    cout << cnt;
    return 0;
}