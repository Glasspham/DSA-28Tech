#include<bits/stdc++.h>
using namespace std;
#define ll long long

int s, t;
bool Prime[10005], used[10005];
void seive() {
    memset(Prime, true, sizeof(Prime));
    Prime[0] = Prime[1] = false;
    for(int i = 2; i <= 100; ++i) {
        if(Prime[i]) {
            for(int j = i * i; j <= 10000; j += i)
                Prime[j] = false;
        }
    }
}

int solve() {
    queue<pair<int,int>> qp;
    qp.push({s, 0});
    used[s] = true;
    while(!qp.empty()) {
        auto[s, n] = qp.front(); qp.pop();
        if(s == t) return n;
        for(int i = 0; i < 4; ++i) {
            char st = '0';
            if(i == 0) st = '1';
            string str = to_string(s);
            for(; st <= '9'; ++st){
                str[i] = st;
                int num = stoi(str);
                if(Prime[num] and !used[num]) {
                    qp.push({num, n + 1});
                    used[num] = true;
                }
            }
        }
    } return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef GLASS
    freopen("../../Text.inp", "r", stdin);
    freopen("../../Text.out", "w", stdout);
    #endif
    seive();
    int q; cin >> q;
    while(q--) {
        memset(used, false, sizeof(used));
        cin >> s >> t;
        cout << solve() << endl;
    }
    return 0;
}