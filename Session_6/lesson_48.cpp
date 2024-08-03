#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, n; cin >> a >> b >> n;
    ll left = 0, right = 1e18, ans = -1; // Nếu không biết lấy cận right thì để 1e18 
    // Bài này lấy right chuẩn là: max(a, b) * n
    while(left <= right){
        ll mid = (left + right) / 2;
        ll cnt = (mid / a) * (mid / b); // Số lượng khối Domino
        if(cnt >= n  || cnt < 0){ // cnt < 0 là trường hợp nếu tích 2 số ll dương thì ra số âm nên vẫn đúng
            ans = mid;
            right = mid - 1;
        }
        else left = mid + 1;
    }
    cout << ans;
    return 0;
}