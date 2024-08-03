#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n], mark_sheet[n + 1] = {0}, cnt = 0;;
    
    #if 1
    for(int &x : a) cin >> x;
    for(int x : a){
        mark_sheet[x] = 1;
        if(!mark_sheet[x - 1]) ++cnt;
    }
    #endif

    #if 0
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        mark_sheet[a[i]] = i;
    }
    mark_sheet[0] = INT_MAX;
    for(int i = 1; i <= n; ++i)
        if(mark_sheet[a[i] - 1] > mark_sheet[a[i]])
            ++cnt;
    #endif

    cout << cnt;
    return 0;
}