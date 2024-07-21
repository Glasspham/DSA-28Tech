#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int n, k, a[1001];
set<string> res;
void XuLy(){
    string str = "";
    for(int i = 1; i <= k; ++i)
        str += to_string(a[i]) + ' ';
    res.insert(str);
}

void Try(int i){
    for(int j = a[i - 1] + 1; j <= n - k + i; ++j){
        a[i] = j;
        if(i == n) XuLy();
        else Try(i + 1);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for(k = 1; k <= n; ++k) Try(1);  
    for(auto it : res) cout << it << endl;
    return 0;
}