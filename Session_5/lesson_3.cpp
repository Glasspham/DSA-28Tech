#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m; cin >> n >> m;
    int value_max = INT_MIN, value_min = INT_MAX;
    vector<pair<int,int>> points_max, points_min;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            int tmp; cin >> tmp;
            if(tmp > value_max){
                points_max.clear();
                value_max = tmp;
                points_max.push_back(make_pair(i, j));
            }
            else if(tmp == value_max) points_max.push_back(make_pair(i, j));
            if(tmp < value_min) {
                points_min.clear();
                value_min = tmp;
                points_min.push_back(make_pair(i, j));
            }
            else if(tmp == value_min) points_min.push_back(make_pair(i, j));
        }
    }
    cout << value_min << endl;
    for(pair<int,int> it : points_min) cout << it.first + 1 << ' ' << it.second + 1 << endl;
    cout << value_max << endl;
    for(pair<int,int> it : points_max) cout << it.first + 1 << ' ' << it.second + 1 << endl;
    return 0;
}