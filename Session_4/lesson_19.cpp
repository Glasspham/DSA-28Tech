#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, tmp; getline(cin, s);
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    set<string> st;
    stringstream ss(s);
    while(ss >> tmp)
        st.insert(tmp);
    cout << st.size() << endl;
    return 0;
}