#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int> res;
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j){
            int num; cin >> num;
            if(i == 0 || i == n - 1 || j == 0 || j == n - 1)
                res.push_back(num);
        }
    for(int x : res) cout << x << ' ';
    return 0;
}