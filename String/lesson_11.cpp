#include<bits/stdc++.h>
using namespace std;

void ChuanHoa(string &s){
    if(s[1] == '/')
        s.insert(0,1,'0');
    if(s[4] == '/')
        s.insert(3,1,'0');
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    ChuanHoa(s);
    cout << s << endl;
    return 0;
}