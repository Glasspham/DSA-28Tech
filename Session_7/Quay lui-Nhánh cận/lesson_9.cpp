#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int n, s, t[31], used[100001], res = 1e9;
void Try(int i, int index, int sum){
    for(int j = index; j <= n; ++j){
        if(sum + t[j] <= s){
            if(sum + t[j] == s)
                res = min(res, i);
            else Try(i + 1, j + 1, sum + t[j]);
        }
        else return; // Nếu ngay t[j] đó mà không được thì về sau số càng lớn càng không được
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> s;
    for(int i = 1; i <= n; ++i) cin >> t[i];
    sort(t + 1, t + n + 1);
    Try(1,1,0);
    if(res == 1e9) cout << -1;
    else cout << res;
    return 0;
}