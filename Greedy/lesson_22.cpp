#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int>odd, even;
    for(int i = 0; i < n; ++i){
        int num; cin >> num;
        if(num % 2 == 0) even.push_back(num);
        else odd.push_back(num);
    }
    if(odd.size() % 2 == 0) cout << "YES\n";
    else{
        sort(odd.begin(), odd.end());
        for(int i = 0; i < even.size(); ++i){
            bool it1 = binary_search(odd.begin(), odd.end(), even[i] - 1);
            bool it2 = binary_search(odd.begin(), odd.end(), even[i] + 1);
            if(it1){
                cout << "YES\n";
                return 0;
            }
            if(it2){
                cout << "YES\n";
                return 0;
            }
        }
        cout << "NO\n";
    }
    
    return 0;
}