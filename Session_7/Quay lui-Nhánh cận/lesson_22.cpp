#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int n, k, a[100];
vector<string> res;
void Try(int i, int idx, int sum){
    for(int j = idx; j <= 9; ++j){
        a[i] = j;
        if(i == k and sum + j == n){
            string str;
            for(int l = 1; l <= k; ++l){
                str += to_string(a[l]);
                if(l != i) str += " + ";
            }
            res.push_back(str);
        }else if(i < k and sum + j < n)
            Try(i + 1, j + 1, sum + j);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    Try(1,1,0);
    if(res.size() == 0) cout << "NOT FOUND\n";
    else{
        for(string s : res) 
            cout << s << endl;
    }
    return 0;
}