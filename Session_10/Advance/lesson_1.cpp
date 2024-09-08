#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int f[1001][1001];
void in(int n, int m){
    ofstream file("Text.txt");
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j)
            file << f[i][j] << " ";
        file << "\n";
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.size();
    int m = s2.size();
    s1 = "0" + s1;
    s2 = "0" + s2;
    f[0][0] = 0;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            if(s1[i] == s2[j])
                f[i][j] = max({f[i - 1][j - 1] + 1, f[i - 1][j], f[i][j - 1]});
            else
                f[i][j] = max({f[i - 1][j], f[i][j -  1]});
        }
    }
    in(n, m);
    cout << f[n][m];
    return 0;
}