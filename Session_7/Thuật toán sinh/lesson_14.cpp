#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int n, k, a[1001];
set<string> res;
bool check(){
    return a[1] == 0 and a[n] == 1 and a[2] != 0;
}

bool check2(){
    int cnt6 = 0, cnt8 = 0;
    for(int i = 2; i <= n; ++i){
        if(a[i]){ 
            ++cnt6;
            if(cnt6 > 3) return false;
            cnt8 = 0;
        }else{
            ++cnt8;
            if(cnt8 > 1) return false;
            cnt6 = 0;
        }
    }
    return true;
}

void in(){
    string str = "";
    for(int i = 1; i <= n; ++i){
        if(a[i]) str += to_string(6);
        else str += to_string(8);
    }
    res.insert(str);
}

void Try(int i){
    for(int j = 0; j <= 1; ++j){
        a[i] = j;
        if(i == n){
            if(check() and check2())
                in();
        }
        else Try(i + 1);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    Try(1);
    for(auto it : res) cout << it << endl;
    return 0;
}