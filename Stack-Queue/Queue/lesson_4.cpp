#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    queue<string> q;
    q.push("1");
    while(n--) {
        string num = q.front(); q.pop();
        cout << num << ' ';
        q.push(num + "0");
        q.push(num + "1");
    }
    return 0;
}