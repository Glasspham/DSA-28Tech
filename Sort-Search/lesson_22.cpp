#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int DanhDau[10] = {0};
    int n; cin >> n;
    for(int i = 0; i < n; ++i){
        string num; cin >> num;
        for(int j = 0; j < num.size(); ++j)
            DanhDau[num[j] - '0'] = 1;
    }
    for(int i = 0; i < 10; ++i)
        if(DanhDau[i])
            cout << i << ' ';
    return 0;
}