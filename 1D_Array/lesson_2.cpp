#include<bits/stdc++.h>
using namespace std;
#define ll long long

int Prime[1005];
void sieve() {
    memset(Prime, 1, sizeof(Prime));
    Prime[0] = Prime[1] = 0;
    for(int i = 2; i < 33; ++i) {
        if(Prime[i]) {
            for(int j = i * i; j < 1001; j += i)
                Prime[j] = 0;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    int n; cin >> n;
    int sum = 0, cnt = 0;
    for(int i = 0; i < n; ++i) {
        int num; cin >> num;
        if(num > 0) {
            if(Prime[num]) {
                sum += num;
                ++cnt;
            }
        }
    }
    cout << fixed << setprecision(3) << 1.0 * sum / cnt;
    return 0;
}