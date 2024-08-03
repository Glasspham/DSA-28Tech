#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, t; cin >> s >> t;
    int dT[256] = {0}, cntT=0;
    // Đếm xem trong T có những kí tự gì
    for(char c : t){
        dT[c]++;
        if(dT[c] == 1) cntT++;
    }

    int l = 0, r = 0, dS[256] = {0}, cntS = 0, res = INT_MAX, st = -1;
    while(r < s.length()){
        // Đếm xem trong S có những kí tự gì
        dS[s[r]]++;
        if(dS[s[r]] && dS[s[r]] == dT[s[r]]) cntS++;
        if(cntT == cntS){
            while(1){
                if(dS[s[l]] - 1 >= dT[s[l]]){
                    dS[s[l]]--;
                    ++l;
                }
                else break;
            }
            if(r - l + 1 < res){
                st = l;
                res = r - l + 1;
            }
        }
        ++r;
    }
    for(int i = st; i < st + res; ++i) cout << s[i];
    return 0;
}