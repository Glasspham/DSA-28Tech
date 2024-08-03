#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int n, m, visited[6][6], ok;
char table[6][6];
string tmp, s;
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

void Try(int i, int j){
    if(ok) return;
    if(tmp == s){
        ok = 1;
        return;
    }
    for(int l = 0; l < 4; ++l){
        int i1 = i + dx[l], j1 = j + dy[l];
        if(i1 >= 1 and i1 <= n and j1 >= 1 and j1 <= m and !visited[i1][j1]){
            tmp += table[i1][j1];
            visited[i1][j1] = 1;
            if(tmp == s) ok = 1;
            else if(s.find(tmp) != string::npos) Try(i1,j1);
            tmp.pop_back();
            visited[i1][j1] = 0;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= m; ++j)
            cin >> table[i][j];
    cin >> s;

    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            if(table[i][j] == s[0]){
                memset(visited, 0, sizeof(visited));
                tmp = "";
                tmp += table[i][j];
                visited[i][j] = 1;
                Try(i,j);
                if(ok){
                    cout << "YES\n";
                    return 0;
                }
            }
        }
    }
    cout << "NO\n";
    return 0;
}