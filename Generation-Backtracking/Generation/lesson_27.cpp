#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int n, a[1001], used[1001];

void in(){
    for(int i = 1; i <= n; ++i)
        cout << a[i];
    cout << endl;
}

void Try(int i){
    for(int j = 1; j <= n; ++j){
        if(!used[j] and abs(j - a[i - 1]) != 1){
            a[i] = j;
            used[j] = 1;
            if(i == n) in();
            else Try(i + 1);
            used[j] =0;
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