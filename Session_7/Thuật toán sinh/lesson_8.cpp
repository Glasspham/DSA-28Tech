#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int a[11], n, final = 1;
void ktao(){
    for(int i = 1; i <= n; ++i)
        a[i] = i;
}

void sinh(){
    int i = n - 1;
    while(i >= 1 and a[i] > a[i + 1]) --i;
    if(i == 0) final = 0;
    else{
        int j = n;
        while(a[i] > a[j]) --j;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    int b[n]; for(int &x : b) cin >> x;
    ktao();
    vector<vector<int>> res;
    while(final){
        vector<int> tmp(a + 1, a + n + 1);
        res.push_back(tmp);
        sinh();
    }
    for(int i = 0; i < res.size(); ++i){
        bool found = true;
        for(int j = 0; j < n; ++j)
            if(res[i][j] != b[j]){
                found = false;
                break;
            }
        if(found){
            cout << i + 1;
            break;
        }
    }
    return 0;
}