#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int n, a[101], cot[101], cheo1[101], cheo2[101], cnt = 0;
void Try(int i){
    for(int j = 1; j <= n; ++j){
        if(!cot[j] and !cheo1[i - j + n] and !cheo2[i + j - 1]){
            cot[j] = cheo1[i - j + n] = cheo2[i + j - 1] = 1;
            a[i] = j;
            if(i == n){
                for(int row = 1; row <= n; ++row){
                    for(int col = 1; col <= n; ++col){
                        if(a[row] == col) cout << "Q";
                        else cout << '.';
                    }
                    cout << endl;
                }
                cout << endl;
            }else Try(i + 1);
            cot[j] = cheo1[i - j + n] = cheo2[i + j - 1] = 0;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    Try(1);
    return 0;
}