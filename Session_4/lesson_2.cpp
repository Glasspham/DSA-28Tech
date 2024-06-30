#include<bits/stdc++.h>
using namespace std;

string Reverse(string s){
    string res;
    for(char c : s)
        res = c + res;
    return res;
}

string toUppers(string s){
    for(char &c : s)
        if('a' <= c and c <= 'z')
            c -= 32;
    return s;
}

string toLower(string s){
    for(char &c : s)
        if('A' <= c and c <= 'Z')
            c += 32;
    return s;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s = ""; cin >> s;
    string tmp = s;
    cout << Reverse(s) << endl;
    cout << toLower(s) << endl;
    cout << toUppers(s) << endl;
    return 0;
}