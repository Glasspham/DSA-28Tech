#include<bits/stdc++.h>
using namespace std;
#define ll long long
/*
Lớn hơn bên phải: từ 1 -> n và >
Nhỏ hơn bên phải: từ 1 -> n và < 
Lớn hơn bên trái: từ n -> 1 và >
Nhỏ hơn bên trái: từ n -> 1 và <
ví dụ
7
        6 2 5 4 5 1 6
L[] = -1 -1 1 1 3 -1 5
R[] = 1 5 3 5 5 7 7 
*/

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int a[n], L[n], R[n];
    stack<int> st;
    for(int &x : a) cin >> x;

    // first position smallest left
    for(int i = n - 1; i >= 0; --i) {
        while(!st.empty() and a[i] < a[st.top()]) {
            L[st.top()] = i;
            st.pop();
        } st.push(i);
    }
    while(!st.empty()) {
        L[st.top()] = -1;
        st.pop();
    }
    
    // first position smallest right
    for(int i = 0; i < n; ++i) {
        while(!st.empty() and a[i] < a[st.top()]) {
            R[st.top()] = i;
            st.pop();
        } st.push(i);
    }
    while(!st.empty()) {
        R[st.top()] = n;
        st.pop();
    }

    ll res = 0;
    for(int i = 0; i < n; ++i)
        res = max(res, 1ll * a[i] * (R[i] - L[i] - 1));
    cout << res;
    return 0;
}