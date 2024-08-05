#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int s, d; cin >> s >> d;
    string res = string(d,'0');
    if(9 * d < s || (s == 0 and d > 1)){
        cout << "-1\n";
        return 0;
    }
    for(int i = d - 1; i >= 0; --i){
        if(s > 9){
            res[i] = '9';
            s -= 9;
        }else{
            if(i != 0){
                res[0] = '1';
                res[i] += (s - 1);
                break;
            }else{
                res[i] += s;
                break;
            }
        }
    }
    cout << res;
    return 0;
}