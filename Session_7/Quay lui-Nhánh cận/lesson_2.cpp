#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int a[101][101], n, check = 1;
string s;
#if 0
void Try(int i, int j){
    if(i == n and j == n) {
        cout << s << endl;
        check = 0;
    }
    if(i + 1 <= n and a[i + 1][j]){
        s += "D";
        a[i + 1][j] = 0;
        Try(i + 1, j);
        s.pop_back();
        a[i + 1][j] = 1;
    }
    if(j + 1 <= n and a[i][j + 1]){
        s += "R";
        a[i][j + 1] = 0;
        Try(i, j + 1);
        s.pop_back();
        a[i][j + 1] = 1;
    }
}
#endif

#if 1
int dx[2] = {0,1};
int dy[2] = {1,0};
string path = "RD";
vector<string> res;
void Try(int i, int j){
    if(i == n and j == n){
        check = 0;
        res.push_back(s);
    }
    for(int l = 0; l < 2; ++l){
        int i1 = i + dx[l];
        int j1 = j + dy[l];
        if(i1 >= 1 and i1 <= n and j1 >= 1 and j1 <= n and a[i1][j1]){
            a[i1][j1] = 0;
            s += path[l];
            Try(i1,j1);
            a[i1][j1] = 1;
            s.pop_back();
        }
    }
}
#endif

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= n; ++j)
            cin >> a[i][j];
    Try(1,1);
    sort(res.begin(), res.end());
    for(string it : res) cout << it << endl;
    if(check) cout << -1;   
    return 0;
}
