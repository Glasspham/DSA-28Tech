#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int a[1001], n, k, final = 1;

void ktao(){
    for(int i = 1; i <= k; ++i)
        a[i] = i;
}

void sinh(){
    int i = k;
    while(i >= 1 and a[i] == n - k + i) --i;
    if(i == 0) final = 0;
    else{
        a[i]++;
        for(int j = i + 1; j <= k; ++j)
            a[j] = a[j - 1] + 1;
    }
}

vector<vector<int>> res;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    int b[1001];
    for(int i = 0; i < k; ++i)
        cin >> b[i];

    ktao();
    while(final){
        vector<int> tmp(a + 1, a + k + 1);
        res.push_back(tmp);
        sinh();
    }
    
    for(int i = res.size() - 1; i >= 0; --i){
        bool found = true;
        for(int j = 0; j < k; ++j){
            if(res[i][j] != b[j]){
                found = false;
                break;
            }
        }
        if(found) {
            cout << res.size() - i << ' ';
            return 0;
        }
    }
}