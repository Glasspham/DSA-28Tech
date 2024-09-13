#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int n, a[9][9], check = 1;
string s;
#if 0
void Try(int x, int y){
    if(x == n and y == n){
        cout << s << endl;
        check = 0;
    }
    if(x + 1 <= n and a[x + 1][y]){
        a[x + 1][y] = 0;
        s += "D";
        Try(x + 1,y);
        a[x + 1][y] = 1;
        s.pop_back();
    }
    if(y - 1 >= 1 and a[x][y - 1]){
        a[x][y - 1] = 0;
        s += "L";
        Try(x,y - 1);
        a[x][y - 1] = 1;
        s.pop_back();
    }
    if(y + 1 <= n and a[x][y + 1]){
        a[x][y + 1] = 0;
        s += "R";
        Try(x,y + 1);
        a[x][y + 1] = 1;
        s.pop_back();
    }
    if(x - 1 >= 1 and a[x - 1][y]){
        a[x - 1][y] = 0;
        s += "U";
        Try(x - 1,y);
        a[x - 1][y] = 1;
        s.pop_back();
    }
}
#endif

#if 1
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
// ULRD
string path = "ULRD";
vector<string> res;
void Try(int x, int y){
    if(x == n and y == n){
        res.push_back(s);
        check = 0;
    }
    for(int i = 0; i < 4; ++i){
        int x1 = x + dx[i];
        int y1 = y + dy[i];
        if(x1 >= 1 and x1 <= n and y1 >= 1 and y1 <= n and a[x1][y1]){
            a[x1][y1] = 0;
            s += path[i];
            Try(x1, y1);
            s.pop_back();
            a[x1][y1] = 1;
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
    a[1][1] = 0;
    Try(1,1);
    sort(res.begin(), res.end());
    for(string it : res) cout << it << endl;
    if(check) cout << -1;
    return 0;
}