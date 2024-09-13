#include<bits/stdc++.h>
using namespace std;

using ll = long long;
char a[1000]; int n, ok = 1;
void ktao(){ for(int i = 1; i <= n; ++i) a[i] = 'B'; }

void sinh(){
    int i = n;
    while(i >= 1 and a[i] == 'A') a[i--] = 'B';
    if(i == 0) ok = 0;
    else a[i] = 'A';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n; ktao();
    while(ok){
        for(int i = 1; i <= n; ++i) cout << a[i];
        cout << endl; sinh();
    }
    return 0;
}