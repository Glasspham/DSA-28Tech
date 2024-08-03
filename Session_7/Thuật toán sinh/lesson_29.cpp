#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int n, a[1001];

bool Check(){
    int cnt = 0;
    for(int i = 1; i <= n; ++i){
        if(a[i] and cnt == 0)
            return false;
        if(a[i]) --cnt;
        else ++cnt;
    }
    return (!cnt) ? true : false;
}

void in(){
    if(Check()){
        for(int i = 1; i <= n; ++i){
            if(a[i]) cout << ')';
            else cout << '(';
        }
        cout << endl;
    }
}

void Try(int i){
    for(int j = 0; j <= 1; ++j){
        a[i] = j;
        if(i == n) in();
        else Try(i + 1);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    Try(1);
    return 0;
}