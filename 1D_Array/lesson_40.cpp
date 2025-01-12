#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    cin.ignore();
    string str;
    getline(cin, str);
    int a[10];
    for(char c : str)
        if(isdigit(c))
            ++a[c - '0'];
    for(int i = 0; i < 10; ++i)
        if(a[i])
            cout << i << ' ' << a[i] << endl;
    return 0;
}