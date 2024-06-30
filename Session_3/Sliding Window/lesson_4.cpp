#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    set<char> st;
    for(char c : s) st.insert(c);
    int l = 0, r = 0, cnt = 0, d[256] = {0}, min_len = s.size();
    while(r < s.size()){
        d[s[r]]++;
        if(d[s[r]] == 1) cnt += 1; // Nếu ký tự đó lần đầu tiên xuất hiện thì tăng biến đếm lên 1
        if(cnt == st.size()){
            while(1){
                if(d[s[l]] - 1 == 0) break; // Check xem trừ bớt 1 giá trị l kế tiếp có bị mất không
                d[s[l]]--;
                ++l;
            }
            min_len = min(min_len, r - l + 1);
        }
        ++r;
    }
    cout << min_len << endl;
    return 0;
}