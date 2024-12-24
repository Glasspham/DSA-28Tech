#include<bits/stdc++.h>
using namespace std;
#define ll long long
/*
0 1 2
3 4 5
*/
set<string> used;
string s, t;

string xoay_trai(string str) {
    string res = str;
    res[0] = str[3];
    res[1] = str[0];
    res[3] = str[4];
    res[4] = str[1];
    return res;
}

string xoay_phai(string str) {
    string res = str;
    res[1] = str[4];
    res[2] = str[1];
    res[4] = str[5];
    res[5] = str[2];
    return res;
}

int BFS() {
    queue<pair<string,int>> qp;
    qp.push({s, 0});
    used.insert(s);
    while(!qp.empty()) {
        auto[s, n] = qp.front(); qp.pop();
        if(s == t) return n;
        string str1 = xoay_phai(s);
        string str2 = xoay_trai(s);
        if(!used.count(str1)) {
            used.insert(str1);
            qp.push({str1, n + 1});
        } 
        if(!used.count(str2)) {
            used.insert(str2);
            qp.push({str2, n + 1});
        }
    } return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef GLASS
    freopen("../../Text.inp", "r", stdin);
    freopen("../../Text.out", "w", stdout);
    #endif
    getline(cin, s);
    getline(cin, t);
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    t.erase(remove(t.begin(), t.end(), ' '), t.end());
    cout << BFS();
    return 0;
}