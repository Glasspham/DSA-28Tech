#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int n, a[101], x[101];
set<string>res;
void Try(int i, int idx){
    for(int j = idx; j <= n; ++j){
        if(a[j] > x[i - 1]){
            x[i] = a[j];
            if(i >= 2){
                string s;
                for(int l = 1; l <= i; ++l)
                    s += to_string(x[l]) + ' ';
                res.insert(s);
            }
            Try(i + 1, j + 1);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    Try(1, 1);
    for(auto it : res) cout << it << endl;
    return 0;
}