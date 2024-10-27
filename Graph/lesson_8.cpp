#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int n;
struct edge{
    int s, e, w;
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    cin >> n;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            int num; cin >> num;
            if(num != 0)
                cout << i + 1 << ' ' << j + 1 << ' ' << num << endl;
        }
    }
    return 0;
}