#include<bits/stdc++.h>
using namespace std;
#define ll long long
/*
Lớn hơn bên phải: từ 1 -> n và >
Nhỏ hơn bên phải: từ 1 -> n và < 
Lớn hơn bên trái: từ n -> 1 và >
Nhỏ hơn bên trái: từ n -> 1 và <
ví dụ
5
    11 18 12 18 10
GR  1 -1 3 -1 -1 greater right
SR  2 -1 4 -1 -1 smaller right
*/
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef GLASS
    freopen("../../Text.inp", "r", stdin);
    freopen("../../Text.out", "w", stdout);
    #endif
    int n; cin >> n;
    int a[n], GR[n];
    stack<int> st;
    // first position greater right
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        while(!st.empty() and a[i] > a[st.top()]) {
            GR[st.top()] = i;
            st.pop();
        } st.push(i);
    }
    while(!st.empty()) {
        GR[st.top()] = -1;
        st.pop();
    }

    // first position smallest right
    int SR[n];
    for(int i = 0; i < n; ++i) {
        while(!st.empty() and a[i] < a[st.top()]) {
            SR[st.top()] = a[i];
            st.pop();
        } st.push(i);
    }
    while(!st.empty()) {
        SR[st.top()] = -1;
        st.pop();
    }
    for(int i = 0; i < n; ++i)
        if(GR[i] != -1)
            cout << SR[GR[i]] << ' ';
        else cout << -1 << ' ';
    
    return 0;
}