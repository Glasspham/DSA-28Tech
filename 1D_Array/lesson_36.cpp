#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int val_max = INT_MIN, val_min = INT_MAX;
    string idx_max, idx_min;
    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        if(x >= val_max) {
            if(x > val_max) {
                val_max = x;
                idx_max = to_string(i) + ' ';
            } else idx_max = to_string(i) + " " + idx_max;
        }
        if(x <= val_min) {
            if(x < val_min) {
                val_min = x;
                idx_min = to_string(i) + " ";
            } else idx_min += to_string(i) + ' ';
        }
    }
    cout << val_min << endl << idx_min << endl;
    cout << val_max << endl << idx_max;
    return 0;
}