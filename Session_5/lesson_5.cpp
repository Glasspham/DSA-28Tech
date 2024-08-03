#include<bits/stdc++.h>
using namespace std;
int a[501][501], n;

void Pattern_1(){
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j)
            cout << a[j][i] << ' ';
        cout << endl;
    }
}

void Pattern_2(){
    for(int i = n - 1; i >= 0; --i){
        for(int j = n - 1; j >= 0; --j)
            cout << a[i][j] << ' ';
        cout << endl;
    }
}

void Pattern_3(){
    for(int i = n- 1; i >= 0; --i){
        for(int j = 0; j < n; ++j)
            cout << a[j][i] << ' ';
        cout << endl;
    }
}

void Pattern_4(){
    for(int i = 0; i < n; ++i){
        for(int j = n - 1; j >= 0; --j)
            cout << a[i][j] << ' ';
        cout << endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;

    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j)
            cin >> a[i][j];
    
    cout << "Pattern 1:\n";
    Pattern_1();
    cout << "Pattern 2:\n";
    Pattern_2();
    cout << "Pattern 3:\n";
    Pattern_3();
    cout << "Pattern 4:\n";
    Pattern_4();
    return 0;
}