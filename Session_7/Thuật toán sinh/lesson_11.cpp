#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int a[1001], n, cnt = 0, ok = 1;
void ktao(){
    cnt = 1;
    a[1] = n;
}

void sinh(){
    int i = cnt;
    while(i >= 1 and a[i] == 1) --i;
    if(i == 0) ok = 0;
    else{
        a[i]--;
        int d = cnt - i + 1;
        cnt = i;
        int q = d / a[i];
        int r = d % a[i];
        for(int j = 1; j <= q; ++j){
            a[i + j] = a[i];
            ++cnt;
        }
        if(r != 0) a[++cnt] = r;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    ktao();
    vector<string> res;
    while(ok){
        string str;
        for(int i = 1; i <= cnt; ++i){
            str += to_string(a[i]);
            if(i < cnt) str += '+';
        }
        res.push_back(str);
        sinh();
    }
    cout << res.size() << endl;
    for(string s : res) cout << s << endl;
    return 0;
}