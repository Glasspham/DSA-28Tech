#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int n, k;
string s;
vector<string>res;
void Try(int idx, string str){
    for(int j = idx; j < n; ++j){
        str += s[j];
        if(str.size() == k) res.push_back(str);
        else Try(j, str);
        str.pop_back();
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k >> s;
    Try(0,"");
    sort(res.begin(),res.end());
    for(string it : res) cout << it << endl;
    return 0;
}