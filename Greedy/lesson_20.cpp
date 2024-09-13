#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int dem[5] = {0};
    for(int i = 0; i < n; ++i){
        int num; cin >> num;
        dem[num]++;
    }

    // 4 human
    int cnt = dem[4];

    // 3 human
    cnt += dem[3];
    dem[1] = max(0, dem[1] - dem[3]);

    // 2 human
    cnt += dem[2] / 2;
    dem[2] %= 2;
    if(dem[2] > 0){
        cnt++;
        dem[1] = max(0, dem[1] - 2);
    }

    // 1 human
    cnt += (dem[1]  + 3) / 4;
    cout << cnt;
    return 0;
}