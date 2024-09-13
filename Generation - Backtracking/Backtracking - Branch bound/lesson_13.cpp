#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int n, a[101], x[10];
void Try(int i, int used){
    for(int j = 1; j <= n; ++j){
        if(abs(used - j) != 1 and !x[j]){
            a[i] = j;
            x[j] = 1;
            if(i == n){
                for(int l = 1; l <= n; ++l)
                    cout << a[l];
                cout << endl;
            }
            else Try(i + 1, j);
            x[j] = 0;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    Try(1,0);
    return 0;
}