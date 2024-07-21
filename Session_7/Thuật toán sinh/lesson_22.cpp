#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int a[1001], n, ok;
void ktao(){
    for(int i = 1; i <= n; ++i)
        a[i] = 6;
}

void sinh(){
    int i = n;
    while(i >= 1 and a[i] == 8) a[i--] = 6;
    if(i == 0) ok = 0;
    else a[i] = 8;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k; cin >> k;
    vector<string> res;
    for(n = 1; res.size() < k; ++n){
        ktao();
        ok = 1;
        while(ok and res.size() < k){
            string s;
            for(int i = 1; i <= n; ++i) s += to_string(a[i]);
            for(int i = n; i >= 1; --i) s += to_string(a[i]);
            res.push_back(s); 
            sinh();
        }
    }
    for(string it : res) cout << it << ' ';
    return 0;
}