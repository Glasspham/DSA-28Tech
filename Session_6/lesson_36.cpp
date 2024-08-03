#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m; cin >> n >> m;
    multiset<int> ticket;
    for(int i = 0; i < n; ++i){
        int price; cin >> price;
        ticket.insert(price);
    }
    while(m--){
        int human; cin >> human;
        auto it = ticket.upper_bound(human);
        --it;
        if(it != ticket.begin()){
            cout << *it << endl;
            ticket.erase(it);
        }
        else
            cout << "-1\n";
    }
    return 0;
}