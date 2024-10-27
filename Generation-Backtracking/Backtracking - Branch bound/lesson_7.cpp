#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int chessboard[9][9], main_diagonal[16], minor_diagonal[16], column[9], res = INT_MIN;
void Try(int i, int total){
    for(int j = 1; j <= 8; ++j){
        if(!column[j] and !main_diagonal[i - j + 8] and !minor_diagonal[i + j - 1]){
            total += chessboard[i][j];
            column[j] = main_diagonal[i - j + 8] = minor_diagonal[i + j - 1] = 1;
            if(i == 8) res = max(res, total);
            else Try(i + 1, total);
            column[j] = main_diagonal[i - j + 8] = minor_diagonal[i + j - 1] = 0;
            total -= chessboard[i][j];
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    for(int i = 1; i <= 8; ++i)
        for(int j = 1; j <= 8; ++j)
            cin >> chessboard[i][j];
    Try(1, 0);
    cout << res;
    return 0;
}