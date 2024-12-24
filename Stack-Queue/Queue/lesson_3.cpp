#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef GLASS
    freopen("../../Text.inp", "r", stdin);
    freopen("../../Text.out", "w", stdout);
    #endif
    int n; cin >> n;
    cin.ignore();
    deque<string> dq;
    string str;
    while(getline(cin, str)) {
        if(str[5] == 'R') {
            str = str.substr(10);
            dq.push_front(str);
        } else if(str[5] == 'A') {
            str = str.substr(9);
            dq.push_back(str);
        } 
        else if(str[5] == 'F')
            cout << ((dq.empty()) ? "NONE" : dq.front()) << endl;
        else if(str[5] == 'O' and !dq.empty())
            dq.pop_front();
        else if(str[5] == 'B')
            cout << ((dq.empty()) ? "NONE" : dq.back()) << endl;
        else if(str[5] == 'C' and !dq.empty())
            dq.pop_back();
    }
    return 0;
}