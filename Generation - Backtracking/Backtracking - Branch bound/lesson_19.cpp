#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int n, a[16], x[16];
vector<vector<int>>res;
void Try(int i, int idx, int sum){
    for(int j = idx; j <= n; ++j){
        x[i] = a[j];
        if((sum + a[j]) % 2 != 0){
            vector<int>tmp(x + 1, x + i + 1);
            res.push_back(tmp);
        }
        Try(i + 1, j + 1, sum + a[j]);
    }
}

vector<int>tmp;
void Try(int idx, int sum){
    for(int j = idx; j <= n; ++j){
        tmp.push_back(a[j]);
        if((sum + a[j]) % 2 != 0) res.push_back(tmp);
        Try(j + 1, sum + a[j]);
        tmp.pop_back();
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    Try(1,0);
    if(res.size() == 0){
        cout << "NOT FOUND";
        return 0;
    }
    sort(res.begin(), res.end());
    for(auto it : res){
        for(auto x : it) 
            cout << x << ' ';
        cout << endl;
    }
    return 0;
}