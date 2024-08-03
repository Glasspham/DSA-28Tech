#include<bits/stdc++.h>
using namespace std;

using ll = long long;
string s;

void sinh(){
    int i = s.length() - 1;
    while(i >= 0 and s[i] == '1') s[i--] = '0';
    if(i == -1) return;
    s[i] = '1';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> s; sinh();
    cout << s;
    return 0;
}