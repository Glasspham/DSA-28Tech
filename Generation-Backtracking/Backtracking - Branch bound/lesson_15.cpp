#include<bits/stdc++.h>
using namespace std;

/*
Test 1:
Input
4
1234567
Output
7654321

Test 2:
Input
3
3435335
Output
5543333

Test 3:
Input
2
1034
Output
4301

Test 4:
Input
2
4355
Output
5543

Test 5:
Input:
1
4321
Output:
4321

Test 6:
Input:
2
987654
Output:
987654

Test 7:
Input:
3
111222
Output:
222111

Test 8:
Input:
2
1234
Output:
4321
*/

using ll = long long;
#if 1
int n, k;
string s, res;
void Try(int i, string curr_str, int cnt){
    if(cnt > k || i > n - 1) return;
    res = max(res, curr_str);
    char max_val = curr_str[i];
    for(int j = i + 1; j < n; ++j)
        max_val = max(max_val, curr_str[j]);
    if(max_val == curr_str[i]) Try(i + 1, curr_str, cnt);
    else{
        for(int j = i + 1; j < n; ++j){
            if(curr_str[j] == max_val){
                string tmp = curr_str;
                swap(tmp[i], tmp[j]);
                Try(i + 1, tmp, cnt + 1);
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> k >> s;
    n = s.size();
    res = s;
    Try(0, s, 0);
    cout << res;
    return 0;
}
#endif

#if 0
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k; cin >> k;
    string s; cin >> s;
    if(k == 0){
        cout << s << endl;
        return 0;
    }
    while(k--){
        string res = s;
        for(int i = 0; i < s.size(); ++i){
            for(int j = i + 1; j < s.size(); ++j){
                string tmp = s;
                swap(tmp[i], tmp[j]);
                res = max(res, tmp);
            }
        }
        s = res;
    }
    cout << s << endl;
    return 0;
}
#endif

