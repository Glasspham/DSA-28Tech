#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int n, a[1001], k;
set<string> res;

void in(){
    int total = 0;
    string str = "";
    for(int i = 1; i <= n; ++i){ 
        total += a[i];
        str += to_string(a[i]);
    }
    if(total == k) res.insert(str);
}

void Try(int i){
    for(int j = 0; j <= 1; ++j){
        a[i] = j;
        if(i == n) in();
        else Try(i + 1);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    Try(1);
    set<string> tmp;
    for(auto it : res){
        cout << it << ' ';
        for(int i = 0; i < it.size() - 1; ++i){
            if(it[i] == it[i + 1]){
                tmp.insert(it);
                break;
            }
        }
    }
    cout << endl;
    for(auto it : tmp) cout << it << ' ';
    
    return 0;
}