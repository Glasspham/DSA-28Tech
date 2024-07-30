#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int n, k, a[101], x[101];
vector<vector<int>> res;

void Try(int i, int idx, int sum){
    for(int j = idx; j <= n; ++j){
        if(sum + a[j] <= k){
            x[i] = a[j];
            if(sum + a[j] == k){
                vector<int>tmp(x + 1, x + i + 1);
                res.push_back(tmp);
            }
            else Try(i + 1, j, sum + a[j]);
        }
        else return;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    sort(a + 1, a + n + 1);
    Try(1,1,0);
    if(res.size() == 0) cout << -1;
    else{
        cout << res.size() << endl;
        for(auto it : res){
            cout << "{";
            for(int i = 0; i < it.size(); ++i){
                cout << it[i];
                if(i != it.size() - 1) cout << ' ';
            }
            cout << "}\n";
        }
    }
    return 0;
}