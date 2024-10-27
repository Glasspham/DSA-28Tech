#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int a[1001], n, cnt = 0, ok = 1;
vector<string> res;
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

vector<int> arr;
void xuly() {
    string s;
    for(int i = 0; i < arr.size(); ++i) {
        if(i > 0) s += '+';
        s += to_string(arr[i]); 
    }
    res.push_back(s);
}

void Try(int k, int m) {
    if(k == 0) {
        xuly();
        return;
    }
    for(int i = min(k, m); i >= 1; --i) {
        arr.push_back(i);
        Try(k - i, i);
        arr.pop_back();
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    #ifndef GLASS
    freopen("../../Text.inp", "r", stdin);
    freopen("../../Text.out", "w", stdout);
    #endif
    cin >> n;
    #if 1 // Sinh
    ktao();
    while(ok){
        string str;
        for(int i = 1; i <= cnt; ++i){
            str += to_string(a[i]);
            if(i < cnt) str += '+';
        }
        res.push_back(str);
        sinh();
    }
    #endif
    cout << res.size() << endl;
    for(string s : res) cout << s << endl;

    #if 1 // Quay lui
    cout << endl;
    res.clear();
    Try(n, n);
    sort(res.begin(), res.end(), greater<string>());
    #endif
    cout << res.size() << endl;
    for(string s : res) cout << s << endl;
    return 0;
}