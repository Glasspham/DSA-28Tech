#include<bits/stdc++.h>
using namespace std;

string Replace(string s){
    int cnt = 0;
    for(int i = s.size() - 1; i >= 0 ; --i){
        if(cnt == 3){
            s.insert(i + 1,",");
            cnt = 0;
        }
        ++cnt;
    }
    return s;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    cout << Replace(s);
    return 0;
}