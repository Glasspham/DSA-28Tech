#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, tmp, res1, res2; getline(cin, s);
    set<string> st;
    stringstream ss(s);
    while (ss >> tmp)
        st.insert(tmp);
    for(string x : st){
        res1 += x + " ";
        res2 = x + " " + res2;
    }
    cout << res1 << endl << res2;
    return 0;
}