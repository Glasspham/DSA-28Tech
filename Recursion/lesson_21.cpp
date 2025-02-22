#include<bits/stdc++.h>
using namespace std;
#define ll long long

int a[1005], n;
string leftStr = "", rightStr = "";

void print(int i) {
    if(i == n) return;
    string str = to_string(a[i]);
    leftStr += str + " ";
    rightStr = str + " " + rightStr;
    print(i + 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    print(0);
    cout << leftStr << endl << rightStr;
    return 0;
}