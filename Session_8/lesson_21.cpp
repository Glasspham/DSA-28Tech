#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    stack<int> index;
    int res = 0;
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == '(') index.push(i);
        else{
            if(index.empty())
                ++res;
            else index.pop();
        }
    }
    cout << res;
    return 0;
}