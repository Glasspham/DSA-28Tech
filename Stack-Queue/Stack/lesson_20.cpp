#include<bits/stdc++.h>
using namespace std;
#define ll long long
// https://vn.spoj.com/problems/QBRECT/
const int N = 1005;
int n, m, a[N], h[N], L[N], R[N], ans;
stack<int> st;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= m; ++j) {
            cin >> a[j];
            h[j] = (a[j] == 1) ? h[j] + 1 : 0;
        }

        st = stack<int> {};
        for(int j = 1; j <= m; ++j) {
            while(!st.empty() and h[j] <= h[st.top()]) st.pop();
            L[j] = st.empty() ? 1 : st.top() + 1;
            st.push(j);
        }

        st = stack<int> {};
        for(int j = m; j >= 1; --j) {
            while(!st.empty() and h[j] <= h[st.top()]) st.pop();
            R[j] = st.empty() ? m : st.top() - 1;
            st.push(j);
        }

        for(int j = 1; j <= m; ++j)
            ans = max(ans, h[j] * (R[j] - L[j] + 1));
    } cout << ans;
    return 0;
}