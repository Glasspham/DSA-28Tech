#include<bits/stdc++.h>
using namespace std;

using ll = long long;
// Chứng minh số chia hết cho giới hạn cao nhất là bao nhiêu chữ số
int n = 19, ok = 1;
string number;
vector<ll> nice_number, res;

void ktao(){
    number = string(n, '0');
}

void sinh(){
    int i = number.size() - 1;
    while(i >= 0 and number[i] == '8') number[i--] = '0';
    if(i == -1) ok = 0;
    else number[i] = '8';
}

void sieve(){
    ktao();
    while(ok){
        nice_number.push_back(stoll(number));
        sinh();
    }
    for(int num = 1; num <= 300; ++num)
        for(int i = 1; i < nice_number.size(); ++i)
            if(nice_number[i] % num == 0){
                res.push_back(nice_number[i]);
                break;
            }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve();
    int t; cin >> t;
    while(t--){
        int num; cin >> num;
        cout << res[num - 1] << endl;
    }
    return 0;
}