#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    sort(s.begin(), s.end());
    cout << s << endl;
    sort(s.begin(), s.end(), greater<char>());
    cout << s << endl;
    return 0;
}