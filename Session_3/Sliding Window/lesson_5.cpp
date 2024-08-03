#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    set<char> st;
    for(char c : s) st.insert(c);
    int l = 0, r = 0, cnt = 1, d[256] = {0};
    for(; r < s.length(); ++r){
        d[s[r]]++;
        while(d[s[r]] > 1){ // Nếu ký tự ngay r trong mảng d 2 giá trị liền xóa từ vị trí l cho đến khi bằng 1
            --d[s[r]];
            ++l;
        }
        cnt = max(cnt, r - l + 1);
    }
    cout << cnt << endl;
    return 0;
}