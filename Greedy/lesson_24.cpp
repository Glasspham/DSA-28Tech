#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    s += '0';
    int cnt = 0;
    vector<int> v;
    for(int i = 0; i < s.length(); ++i){
        if(s[i] == '1') cnt++;
        else{
            if(cnt != 0) v.push_back(cnt);
            cnt = 0;
        }
    }
    sort(v.begin(), v.end(), greater<int>());
    for(int i = 0; i < v.size(); i += 2)
        cnt += v[i];
    cout << cnt;
    return 0;
}