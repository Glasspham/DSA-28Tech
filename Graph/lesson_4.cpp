#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int> save;
    cin.ignore();
    for(int i = 1; i <= n; ++i) {
        string s; getline(cin, s);
        int num;
        istringstream iss(s);
        while(iss >> num) save.push_back(num);
        sort(save.begin(), save.end());
        for(auto it : save)
            cout << i << ' ' << it << endl;
        save.clear();
    }
    return 0;
}