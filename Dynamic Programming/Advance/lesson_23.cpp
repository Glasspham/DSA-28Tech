#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#if 0
string s;
int loang(int l, int r){
    while(l >= 0 and r <= s.size() and s[l] == s[r])
        --l, ++r;
    return r - l - 1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> s;
    int res = 0;
    for(int i = 1; i < s.size(); ++i){
        int res1 = loang(i - 1, i + 1);
        int res2 = loang(i, i + 1);
        res = max({res, res1, res2});
    }
    cout << res;
    return 0;
}
#endif

#if 1
/*
s = abccbxa
n = 7

TFFFFFF     len 1: f[1][1], f[2][2], ..., f[n][n] = true
0TFFTFF     len 2: f[1][2], f[2][3], ..., f[6][7] 
00TTFFF     len 3: f[1][3], f[2][4], ..., f[5][7]
000TFFF
0000TFF
00000TF
000000T

*/
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    int n = s.size();
    s = '@' + s;
    bool f[n + 1][n + 1];
    memset(f, false, sizeof(f));
    int ans = 0;
    for(int i = 1; i <= n; ++i) f[i][i] = true;
    for(int l = 2; l <= n; ++l){
        for(int i = 1; i <= n - l + 1; ++i){
            int j = i + l - 1;
            if(l == 2) f[i][j] = (s[i] == s[j]);
            else f[i][j] = (s[i] == s[j]) and f[i + 1][i - 1];
            if(f[i][j]) ans = max(ans, l);
        }
    }
    cout << ans << endl;
}
#endif