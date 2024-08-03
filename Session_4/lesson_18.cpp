#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, tmp; getline(cin, s);
    vector<string> v;
    stringstream ss(s);
    while (ss >> tmp)
        v.push_back(tmp);
    sort(v.begin(), v.end(),[](string a, string b){
        return (a.size() != b.size()) ? a.size() < b.size() : a < b;
    });
    for(string it : v) cout << it << ' ';
    return 0;
}