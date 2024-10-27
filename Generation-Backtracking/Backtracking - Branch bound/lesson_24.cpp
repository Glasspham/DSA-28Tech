#include<bits/stdc++.h>
using namespace std;

using ll = long long;
set<string> res;
string s, str;
void Try(int i){
    for(char c : {toupper(s[i]), tolower(s[i])}){
        str += c;
        if(str.size() == s.size())  res.insert(str);
        else Try(i + 1);
        str.pop_back();
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> s;
    Try(0);
    for(auto it : res) cout << it << endl;
    return 0;
}