#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    cin.ignore();
    string s[n];
    for(string &x : s)
        getline(cin, x);
    set<char> visited, res;
    for(char c : s[0]){
        if(c != ' ' and visited.find(c) == visited.end()){
            bool f = true;
            visited.insert(c);
            for(int i = 1; i < n; ++i){
                if(s[i].find(c) == string::npos)
                    f = false;
            }
            if(f) res.insert(c);
        }
    }
    if(res.size())
        for(auto it : res)
            cout << it << ' ';
    else
        cout << "NOT FOUND\n";
    return 0;
}