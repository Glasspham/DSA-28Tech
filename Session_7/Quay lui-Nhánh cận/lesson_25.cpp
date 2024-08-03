#include<bits/stdc++.h>
using namespace std;

using ll = long long;
bool Check(string s){
    int l = 0, r = s.size() - 1;
    while(l < r){
        if(s[l] != s[r]) return false;
        ++l, --r;
    }
    return true;
}

vector<vector<string>> res;
vector<string>str;

void Try(int start, string s){
    if(start >= s.size()) res.push_back(str);
    for(int end = start; end < s.size(); ++end){
        if(Check(s.substr(start, end - start + 1))){
            str.push_back(s.substr(start, end - start + 1));
            Try(end + 1,s);
            str.pop_back();
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    Try(0,s);
    for(auto it : res){
        for(string x : it)
            cout << x << ' ';
        cout << endl;
    }
    return 0;
}