#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[1005];
// mảng giảm dần
int binarySearch(int left, int right, int x) {
    if(left > right) return 0;
    int mid = (left + right) / 2;
    if(a[mid] == x) return 1;
    else if(a[mid] > x) 
        return binarySearch(mid + 1, right, x);
    return binarySearch(left, mid - 1, x);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    int X; cin >> X;
    cout << binarySearch(0, n - 1, X);
    return 0;
}