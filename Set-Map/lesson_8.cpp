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
        st.insert(x);
    }
    int q; cin >> q;
    while(q--) {
        int sl, num;; cin >> sl;
        switch(sl) {
            case 1:
                cin >> num;
                st.insert(num);
                break;
            case 2:
                cin >> num;
                st.erase(num);
                break;
            case 3:
                cout << *st.begin() << endl;
                break;
            case 4:
                cout << *st.rbegin() << endl;
                break;
        }
    }
    return 0;
}