#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, tmp, res; getline(cin, s);
    int cnt = 0;
    stringstream ss(s);
    while(ss >> tmp){
        ++cnt;
        if(cnt % 2 == 0)
            reverse(tmp.begin(), tmp.end());
        res += tmp + " ";
    }
    res.erase(res.size() - 1);
    cout << res << endl;
    return 0;
}