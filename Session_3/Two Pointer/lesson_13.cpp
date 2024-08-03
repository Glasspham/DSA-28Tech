#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    int n = s.length();
    int x, y; cin >> x >> y;
    int l = 0, r = 0, cnt2 = 0, cnt8 = 0, res = 0;
    for(; r < n; ++r){
        if(s[r] == '2') ++cnt2;
        else ++cnt8;
        while (cnt2 > x || cnt8 > y){
            if(s[l] == '2') --cnt2;
            else --cnt8;
            ++l;
        }
        res = max(res, cnt2 + cnt8);
    }
    cout << res << endl;
    return 0;
}