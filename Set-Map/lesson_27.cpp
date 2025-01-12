#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    cin.ignore();
    map<string,vector<string>> mpv;
    for(int i = 0; i < n; ++i) {
        string names; getline(cin, names);
        auto it = names.find('-');
        string name1 = names.substr(0, it - 1);
        string name2 = names.substr(it + 2);
        mpv[name1].push_back(name2);
        mpv[name2].push_back(name1);
    }
    for(auto it : mpv) {
        cout << it.first << " : ";
        for(int i = 0; i < it.second.size(); ++i) {
            cout << it.second[i];
            if(i < it.second.size() - 1)
                cout << ", ";
        } cout << endl;
    }
    return 0;
}