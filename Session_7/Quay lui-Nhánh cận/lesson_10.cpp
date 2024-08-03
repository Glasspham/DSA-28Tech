#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int n, city[16][16], visited[16], ans = INT_MAX, cmin = INT_MAX;
#if 0
void Try(int i, int total, int start){
    for(int j = 1; j <= n; ++j){
        if(!visited[j]){
            total += city[start][j];
            visited[j] = 1;
            if(i == n){
                total += city[j][1];
                ans = min(total, ans);
            }else Try(i + 1, total, j);
            visited[j] = 0;
            total -= city[start][j];
        }
    }
}
#endif

#if 1
void Try(int i, int total, int st){
    for(int j = 1; j <= n; ++j){
        if(!visited[j]){
            total += city[st][j];
            visited[j] = 1;
            if(i == n) ans = min(total + city[j][1], ans);
            else if(total + (n - i + 1) * cmin < ans) // Không có nhánh cận thì bị over time
                Try(i + 1, total, j);
            visited[j] = 0;
            total -= city[st][j];
        }
    }
}
#endif

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j){
            cin >> city[i][j];
            if(city[i][j]) 
                cmin = min(cmin, city[i][j]);
        }
    }
    Try(1,0,1);
    cout << ans;
    return 0;
}