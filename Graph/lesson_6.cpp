#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int n;
vector<pair<int,int>> edge;
vector<int> adjacent_list [1005];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= n; ++j) {
            int num; cin >> num;
            if(num == 1) {
                edge.push_back({i, j});
                adjacent_list[i].push_back(j);
            }
        }
    }
    for(const auto it : edge) 
        cout << it.first << ' ' << it.second << endl;
    cout << endl;
    for(int i = 1; i <= n; ++i) {
        cout << i << " : ";
        for(const auto it : adjacent_list[i])
            cout << it << ' ';
        cout << endl;
    }
    return 0;
}