#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    map<int,int> mp;
    int n; cin >> n;
    mp.erase(n);
    for(auto it : mp) cout << it.first << ' ' << it.second;
    return 0;
}