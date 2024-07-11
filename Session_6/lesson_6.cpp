#include<bits/stdc++.h>
using namespace std;

void selectionSort(int a[], int n){
    int idx = 0;
    for(int i = 0; i < n - 1; ++i){
        idx = i;
        for(int j = i + 1; j < n; ++j)
            if(a[idx] > a[j])
                idx = j;
        swap(a[idx], a[i]);
        cout << "Buoc " << i + 1 << ": ";
        for(int i = 0 ; i < n ; ++i) cout << a[i] << ' ' ;
        cout << endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[n]; for(int &x : a) cin >> x;
    selectionSort(a, n);
    return 0;
}