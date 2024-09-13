#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int n, k, s, cnt = 0;
void Try(int i, int total, int index){
    for(int j = index; j <= n; ++j){
        if(i == k){if(total + j == s) ++cnt;}
        else Try(i + 1, total + j, j + 1);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k >> s;
    Try(1, 0, 1); cout << cnt;
    return 0;
}