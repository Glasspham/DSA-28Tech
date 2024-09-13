#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    int cnt[256] = {0}, max_fre = 0;
    for(char c : s){
        cnt[c]++;
        max_fre = max(cnt[c], max_fre);
    }
    int n = s.size();
    if(max_fre <= (n + 1) / 2) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
