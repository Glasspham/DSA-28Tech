#include<bits/stdc++.h>
using namespace std;

using ll = long long;

string gridChallenge(vector<string> grid) {
    for(int i = 0; i < grid.size(); ++i)
        sort(grid[i].begin(),grid[i].end());
    for(int i = 0; i < grid.size(); ++i)
        for(int j = 1; j < grid.size(); ++j)
            if(grid[j][i] < grid[j - 1][i])
                return "NO";
    return "YES";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<string>grid;
    for(int i = 0; i < n; ++i){
        string str; cin >> str;
        grid.push_back(str);
    }
    cout << gridChallenge(grid);
    return 0;
}