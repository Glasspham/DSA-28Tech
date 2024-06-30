#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s = ""; cin >> s;
    string tmp = s;
    reverse(tmp.begin(), tmp.end());
    cout << tmp << endl;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s << endl;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << s << endl;
    return 0;
}