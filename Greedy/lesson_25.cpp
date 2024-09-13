#include<bits/stdc++.h>
using namespace std;

using ll = long long;
/*
Quy tắc
Nếu ban đầu nhận được là chẵn(lẻ) thì cả trận cũng chỉ nhận chẵn(lẻ)
*/ 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string str; cin >> str;
    int dem[256] = {0}, cnt = 0;
    for(char c : str) dem[c];
    for(int i = 97; i <= 122; ++i)
        if(dem[i] % 2 == 1)
            cnt++;
    if(cnt == 0 or cnt % 2 == 1) cout << 1;
    else cout << 2;
    return 0;
}