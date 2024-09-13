#include<bits/stdc++.h>
using namespace std;
// Bài 12
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int sum; cin >> sum;
    int d4 = -1, d7;
    for(d7 = sum / 7; d7 >= 0; ++d7){
        if((sum - 7 * d7) % 4 == 0){
            d4 = (sum - 7 * d7) % 4;
            break;
        }
    }
    if(d4 != -1){
        for(int i = 0; i < d4; ++i) cout << "4";
        for(int i = 0; i < d7; ++i) cout << "7";
    } else cout << -1;
    return 0;
}