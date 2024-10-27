#include<bits/stdc++.h>
using namespace std;

using ll = long long;
vector<int> adj[1005];
vector<pair<int,int>> dscanh;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n; cin >> n;
    cin.ignore();
    for(int i = 1; i <= n; ++i){
        string s; getline(cin, s);
        istringstream iss(s);
        int num;
        while(iss >> num)
            if(num > i)
                cout << i << " " << num << endl;     
    }
    return 0;
}