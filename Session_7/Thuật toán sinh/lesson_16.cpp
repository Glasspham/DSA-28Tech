#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int n, k, a[1001];
set<int> st;
void sinh(){
    int i = k;
    while(i >= 1 and a[i] == n - k + i) --i;
    if(i == 0) cout << k;
    else{
        int cnt = 0;
        a[i]++;
        for(int j = i + 1; j <= n; ++j)
            a[j] = a[j - 1] + 1;
        for(int j = 1; j <= k; ++j)
            if(st.find(a[j]) == st.end())
                ++cnt;
        cout << cnt;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    for(int i = 1; i <= k; ++i){
        cin >> a[i];
        st.insert(a[i]);    
    }
    sinh();
    return 0;
}