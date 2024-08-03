#include <bits/stdc++.h>
using namespace std;

long long Fibo[82];
void Fibonacci(){
    Fibo[0] = 0, Fibo[1] = 1;
    for(int i = 2; i < 82; ++i)
        Fibo[i] = Fibo[i - 1] + Fibo[i - 2];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Fibonacci();
    int n;
    cin >> n;
    int a[n][n];
    int top = 0, bottom = n - 1, left = 0, right = n - 1, value_fibo = 0;

    while(top <= bottom && left <= right) {
        for(int i = left; i <= right; ++i) 
            a[top][i] = Fibo[value_fibo++];
        ++top;

        for(int i = top; i <= bottom; ++i) 
            a[i][right] = Fibo[value_fibo++];
        --right;

        for (int i = right; i >= left; --i) 
            a[bottom][i] = Fibo[value_fibo++];
        --bottom;
        
        for(int i = bottom; i >= top; --i)
            a[i][left] = Fibo[value_fibo++];
        ++left;
    }

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) 
            cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}
