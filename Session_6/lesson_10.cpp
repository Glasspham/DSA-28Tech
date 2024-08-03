#include<bits/stdc++.h>
using namespace std;

int ham1(int a[], int n, int x){
    int l = 0, r = n - 1, res = -1;
    while (l <= r){
        int m = (l + r) / 2;
        if(a[m] == x){
            res = m;
            r = m - 1;
        }
        else if(a[m] > x) r = m - 1;
        else l = m + 1;
    }
    return res;
}

int ham2(int a[], int n, int x){
    int l = 0, r = n - 1, res = -1;
    while (l <= r){
        int m = (l + r) / 2;
        if(a[m] == x){
            res = m;
            l = m + 1;
        }
        else if(a[m] > x) r = m - 1;
        else l = m + 1;
    }
    return res;
}

int ham3(int a[], int n, int x){
    int l = 0, r = n - 1, res = -1;
    while (l <= r){
        int m = (l + r) / 2;
        if(a[m] >= x){
            res = m;
            r = m - 1;
        }
        else l = m + 1;
    }
    return res;
}

int ham4(int a[], int n, int x){
    int l = 0, r = n - 1, res = -1;
    while (l <= r){
        int m = (l + r) / 2;
        if(a[m] > x){
            res = m;
            r = m - 1;
        }
        else l = m + 1;
    }
    return res;
}

int ham5(int a[], int n, int x){
    int l = ham1(a, n, x), r = ham2(a, n, x);
    if(l != -1)
        return r - l + 1;
    return 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x; cin >> n >> x;
    int a[n]; for(int &x : a) cin >> x;
    sort(a, a + n);
    cout << ham1(a, n, x) << endl;
    cout << ham2(a, n, x) << endl;
    cout << ham3(a, n, x) << endl;
    cout << ham4(a, n, x) << endl;
    cout << ham5(a, n, x) << endl;
    return 0;
}