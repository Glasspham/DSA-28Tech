#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int a[1001], n, ok;
void sinh(){
    int i = n;
    while(i >= 1 && a[i]) a[i--] = 0;
    if(i == 0) ok = 0;
    else a[i] = 1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k; cin >> k;
    vector<string> res;
    for(n = 1; n <= k / 2; ++n){
        ok = 1;
        while(ok){
            string str;
            for(int i = 1; i <= n; ++i) str += to_string(a[i]);
            for(int i = n; i >= 1; --i) str += to_string(a[i]);
            res.push_back(str);
            sinh();
        }
    }
    sort(res.begin(), res.end());
    for(string it : res) cout << it << endl;
}