#include<bits/stdc++.h>
using namespace std;

int  a[1001], x[1001], n, k, total = 0;

void Try(int i, int pos){
    for(int j = pos; j <= n; ++j){
        x[i] = a[j];
        total += a[j];
        if(total == k){
            cout << '[';
            for(int l = 1; l <= i; ++l){
                cout << x[l];
                if(l < i) cout << ' ';
            }
            cout << "]\n";
        }else Try(i + 1, j + 1);
        total -= a[j];
    }
}

void Try(int i, int pos, int sum){
    for(int j = pos; j <= n; ++j){
        x[i] = a[j];
        if(sum + a[j] == k){
            cout << '[';
            for(int l = 1; l <= i; ++l){
                cout << x[l];
                if(l < i) cout << ' ';
            }
            cout << "]\n";
        }else if(sum + a[j] < k)Try(i + 1, j + 1, sum + a[j]);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    sort(a, a + n);
    Try(1,1);
    Try(1,1,0);
    return 0;
}