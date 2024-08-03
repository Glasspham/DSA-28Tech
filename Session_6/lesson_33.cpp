#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    set<int> st;
    for(int i = 0; i < n; ++i){
        int number; cin >> number;
        st.insert(number);
    }
    cout << st.size();
    return 0;
}