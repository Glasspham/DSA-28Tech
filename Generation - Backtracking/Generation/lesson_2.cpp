#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int a[1001], n, k, final = 1;
void ktao(){
    for(int i = 1; i <= k; ++i)
        a[i] = i;
}

void sinh(){
    int i = k;
    while (i >= 1 and a[i] == n - k + i) --i;
    if(i == 0){
        ktao();
        return;
    }
    else{
        a[i]++;
        for(int j = i + 1; j <= k; ++j)
            a[j] = a[j - 1] + 1;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    for(int i = 1; i <= k; ++i)
        cin >> a[i];
    sinh();
    for(int i = 1; i <= k; ++i)
        cout << a[i] << ' ';
    return 0;
}