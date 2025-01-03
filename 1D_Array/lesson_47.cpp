#include<bits/stdc++.h>
using namespace std;
#define ll long long

int Prime[1000001];
void sieve() {
    for(int i = 0; i < 1000001; ++i)
        Prime[i] = 1;
    Prime[0] = Prime[1] = 0;
    for(int i = 2; i < 1001; ++i) {
        if(Prime[i]) {
            for(int j = i * i; j < 1000001; j += i)
                Prime[j] = 0;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef GLASS
    freopen("../Text.inp", "r", stdin);
    freopen("../Text.out", "w", stdout);
    #endif
    sieve();
    int n; cin >> n;
    int a[n];
    int st_curr= -1, st = -1, len = 0, len_max = 0, sum = 0, sum_max = 0;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        if(Prime[a[i]]) {
            ++len;
            sum += a[i];
            if(len == 1) st_curr = i;
        } else {
            if(len_max < len or (len_max == len and sum > sum_max)) {
                len_max = len;
                sum_max = sum;
                st = st_curr;
            }
            len = 0;
            sum = 0;
            st_curr = -1;
        }
    }
    if(len > 0 && (len_max < len || (len_max == len && sum > sum_max))) {
        len_max = len;
        st = st_curr;
    }
    if(len_max == 0) cout << "NOT FOUND\n";
    else {
        cout << len_max << endl;
        for(int i = st; i < st + len_max; ++i)
            cout << a[i] << ' ';
    }
    return 0;
}