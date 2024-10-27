#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m; cin >> n >> m;
    int boys[n], girls[m];
    for(int &x : boys) cin >> x;
    for(int &x : girls) cin >> x;
    sort(boys, boys + n);
    sort(girls, girls + m);
    int i = 0, j = 0, cnt = 0;
    while(i < n and j < m){
        if(abs(boys[i] - girls[j]) <= 1)
            ++cnt, ++i, ++j;
        else if(boys[i] < girls[j]) ++i;
        else ++j;
    }
    cout << cnt;
    return 0;
}