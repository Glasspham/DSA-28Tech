#include<bits/stdc++.h>
using namespace std;
#define ll long long
int const maxn = 1000005;
int a[maxn], BIT[maxn], n;
/** 
 * ! Bù 1 là cộng thêm 1 bit 1 phí sau cùng
 * ! Bù 2 là lấy bù 1 cộng thêm 1 bit 1 phía sau cùng
 * TODO pos & (-pos) để lấy ra bit 1 cuối cùng của pos 
 * TODO (-pos) là bù 2 của pos
 * ? Ví dụ:
 * * pos = 3 ~ 0011
 * * bù 1 của pos 1100
 * * -pos = 1101
 * * res = pos & (-pos) = 0001
 * * pos = pos + res = 0100 ~ 4
 * * bù 1 của pos 1011
 * * -pos = 1100
 * * res = pos & (-pos) = 1100
*/
void update(int pos, int val) {
    for(; pos <= n; pos += pos & (-pos)) {
        BIT[pos] += val;
    }
}

int query(int pos) {
    int sum = 0;
    for(; pos > 0; pos -= pos & (-pos))
        sum += BIT[pos];
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
        update(i, a[i]);
    }
    cout << query(5) - query(2) << endl;
    return 0;
}