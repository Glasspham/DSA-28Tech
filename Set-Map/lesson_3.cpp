#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    set<int> st;
    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        if(st.find(x) == st.end()) {
            cout << x << ' '; 
            st.insert(x);
        }
    }
    return 0;
}