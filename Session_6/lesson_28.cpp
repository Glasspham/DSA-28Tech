#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    #if 0
    vector<int> number, zeros;
    for(int i = 0; i < n; ++i){
        int num; cin >> num;
        if(num != 0) number.push_back(num);
        else zeros.push_back(num);
    }
    for(int x : number) cout << x << ' ';
    for(int x : zeros) cout << x << ' ';
    #endif

    #if 1
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n, [](int a, int b){
        if(a != 0 and b == 0)
            return a > b;
        return false;
    });        
    
    for(int x : a) cout << x << ' ';
    #endif
    return 0;
}