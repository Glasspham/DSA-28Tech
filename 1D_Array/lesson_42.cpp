#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef GLASS
    freopen("../../Text.inp", "r", stdin);
    freopen("../../Text.out", "w", stdout);
    #endif
    int n; cin >> n;
    int a[n], d[n];
    stack<int> st;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        while(!st.empty() and a[st.top()] < a[i]) {
            d[st.top()] = a[i];
            st.pop();
        } 
        st.push(i);
    } 
    while(!st.empty()) {
        d[st.top()] = -1;
        st.pop();
    }
    for(int x : d) cout << x << ' ';
    return 0;
}