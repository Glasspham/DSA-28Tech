#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m; cin >> n >> m;
    int dong[n] = {0}, cot[m] = {0};
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            int tmp; cin >> tmp;
            dong[i] += tmp;
            cot[j] += tmp;
        }
    }
    for(int x : dong) cout << x << ' ';
    cout << endl;
    for(int x : cot) cout << x << ' ';
    return 0;
}