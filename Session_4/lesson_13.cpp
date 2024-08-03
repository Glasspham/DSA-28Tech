#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, res; getline(cin,s);
    set<char> st = {'.', ',', '!', '?'};
    for(char c : s){
        if(st.find(c) == st.end())
            res += c;
    }
    while(s[s.size() - 1] == ' ')
        s.erase(s.size() - 1);
    cout << res << endl;
    return 0;
}