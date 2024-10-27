#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int f[1001][1001];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, V; cin >> N >> V;
    int w[N + 1], v[N + 1];
    for(int i = 1; i <= N; ++i) cin >> w[i];
    for(int i = 1; i <= N; ++i) cin >> v[i];
    
    for(int i = 1; i <= N; ++i)
        for(int j = 1; j <= V; ++j)
            if(j >= w[i])
                f[i][j] = max(v[i] + f[i - 1][j - w[i]], f[i - 1][j]);
            else f[i][j] = f[i - 1][j];                
    cout << f[N][V];  
    return 0;
}