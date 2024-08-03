#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#if 1 // Quay lui
int a[1001], n, k;
void in(){
    for(int i = 1; i <= k; ++i)
        cout << a[i];
    cout << endl;
}

void Try(int i){
    for(int j = 1; j <= n; ++j){
        a[i] = j;
        if(i == k) in();
        else Try(i + 1);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    Try(1);
    return 0;
}
#endif

#if 1 // Sinh
int a[1001], n, k, ok = 1;
void ktao(){
    for(int i = 1; i <= k; ++i)
        a[i] = 1;
}

void sinh(){
    int i = k;
    while(i >= 1 and a[i] == n) --i;
    if(i == 0) ok = 0;
    else{
        a[i]++;
        for(int j = i + 1; j <= k; ++j)
            a[j] = 1;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    ktao();
    while(ok){
        for(int i = 1; i <= k; ++i)
            cout << a[i];
        cout << endl;
        sinh();
    }
    return 0;
}
#endif