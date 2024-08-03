#include<bits/stdc++.h>
using namespace std;

using ll = long long;
string s;
int n;
vector<vector<char>> character = {
    {'0'},{'0'},
    {'a','b','c'},
    {'d','e','f'},
    {'g','h','i'},
    {'j','k','l'},
    {'m','n','o'},
    {'p','q','r','s'},
    {'t','u','v'},
    {'w','x','y','z'}
};

void Try(int i, string res){
    int num = s[i] - '0';
    for(char c : character[num]){
        if(i == n) cout << res + c + ' ';
        else Try(i + 1, res + c);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> s;
    sort(s.begin(),s.end());
    n = s.length();
    s = '0' + s;
    Try(1,"");
    return 0;
}