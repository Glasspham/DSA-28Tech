#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    sort(s.begin(), s.end());
    do{cout << s << endl;}while(next_permutation(s.begin(), s.end()));
    return 0;
}