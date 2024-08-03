#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; int k; cin >> s >> k;
    s.insert(k, "28tech");
    cout << s << endl;
    return 0;
}