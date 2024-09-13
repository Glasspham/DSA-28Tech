#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, tmp; getline(cin, s);
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    stringstream ss(s);
    int cnt = 0;
    while(ss >> tmp)
        if(tmp == "28tech")
            ++cnt;
    cout << cnt << endl;
    return 0;
}