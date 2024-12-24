#include<bits/stdc++.h>
using namespace std;
#define ll long long
/*
1. Trả về kích thước của queue 
2. Kiểm tra xem queue có rỗng không, nếu có in ra “YES”, nếu không in ra “NO”. 
3. Cho một số nguyên và đẩy số nguyên này vào cuối queue. 
4. Loại bỏ phần tử ở đầu queue nếu queue không rỗng, nếu rỗng không cần thực hiện. 
5. Trả về phần tử ở đầu queue, nếu queue rỗng in ra -1. 
6. Trả về phần tử ở cuối queue, nếu queue rỗng in ra -1
*/
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef GLASS
    freopen("../../Text.inp", "r", stdin);
    freopen("../../Text.out", "w", stdout);
    #endif
    int n; cin >> n;
    queue<int> q;
    while(n--) {
        int t; cin >> t;
        if(t == 1) cout << q.size() << endl;
        if(t == 2) cout << ((q.empty()) ? "YES\n" : "NO\n");
        if(t == 3) {
            int x; cin >> x;
            q.push(x);
        }
        if(t == 4) {
            if(!q.empty()) q.pop();
        }
        if(t == 5) {
            if(!q.empty()) cout << q.front() << endl;
            else cout << -1 << endl;
        }
        if(t == 6) {
            if(!q.empty()) cout << q.back() << endl;
            else cout << -1 << endl;
        }
    }
    return 0;
}