#include<bits/stdc++.h>
using namespace std;

void HopVaGiao(int a[], int n, int b[], int m){
    vector<int> hop, giao;
    int i = 0, j = 0;
    while(i < n and j < m){
        if(a[i] == b[j]){
            hop.push_back(a[i]);
            giao.push_back(a[i]);
            ++i, ++j;
        }
        else if(a[i] < b[j])
            hop.push_back(a[i++]);
        else
            hop.push_back(b[j++]);

    }
    while(i < n) hop.push_back(a[i++]);
    while(j < m) hop.push_back(b[j++]);
    for(int x : giao) cout << x << ' ';
    cout << endl;
    for(int x : hop) cout << x << ' ';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m; cin >> n >> m;
    int a[n]; for(int &x : a) cin >> x;
    int b[m]; for(int &x : b) cin >> x;
    sort(a, a + n), sort(b, b + m);
    HopVaGiao(a, n, b, m);
    return 0;
}