#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    string digit, character;
    for(char c : s){
        if(isdigit(c))
            digit += c;
        else character += c;
    }
    cout << digit << endl << character;
    return 0;
}