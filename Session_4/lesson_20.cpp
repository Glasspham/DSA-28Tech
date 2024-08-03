#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, tmp; getline(cin,s);
    stringstream ss(s);
    while(ss >> tmp){
        string tmp1 = tmp;
        reverse(tmp1.begin(), tmp1.end());
        if(tmp == tmp1)
            cout << tmp << ' ';
    }
    return 0;
}