#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    #if 0
    set<int> st;
    while(n--){
        int num; cin >> num;
        st.insert(num);
    }
    cout << st.size();
    #endif

    #if 1
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n);
    int cnt = 0;
    for(int i = 0; i < n - 1; ++i)
        if(a[i] != a[i + 1])
            cnt++;
    cout << cnt + 1;
    #endif
    return 0;
}