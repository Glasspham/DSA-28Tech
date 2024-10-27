#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k; cin >> n >> k;
    int a[n]; for(int &x : a) cin >> x;
    #if 0 // Cách 1
    sort(a, a + n);
    for(int i = 0; i < n - 1; ++i){
        if(a[i] == a[i + 1] and 1 <= k){
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    #endif

    #if 1
    set<int> st;
    for(int i = 0; i <= k; ++i){
        if(st.find(a[i]) != st.end()){
            cout << "YES\n";
            return 0;
        }
        st.insert(a[i]);
    }
    for(int i = k + 1; i < n; ++i){
        st.erase(a[i - k - 1]);
        if(st.find(a[i]) != st.end()){
            cout << "YES\n";
            return 0;
        }
        st.insert(a[i]);
    }
    cout << "NO\n";
    #endif
    return 0;
}