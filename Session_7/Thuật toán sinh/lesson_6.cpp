#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int a[11], n, final = 1;
void ktao(){
    #if 0 // Dành cho next_permutation()
    for(int i = 1; i <= n; ++i)
        a[i] = n - i + 1;
    #endif

    #if 1 // Tự viết
    for(int i = 1; i <= n; ++i)
        a[i] = i;
    #endif
}

void sinh(){
    int i = n - 1;
    while(i >= 1 and a[i] > a[i + 1]) --i;
    if(i == 0) final = 0;
    else{
        int j = n;
        while(a[i] > a[j]) --j;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    ktao();

    #if 0 // Hàm có sẵn prev_permutation()
    do{
        for(int i = 1; i <= n; ++i)
            cout << a[i];
        cout << endl;
    }while(prev_permutation(a + 1, a + n + 1));
    #endif

    #if 1 // Tự viết hàm
    vector<vector<int>> res;
    do{
        vector<int> tmp(a + 1, a + n + 1);
        res.push_back(tmp);
        sinh();
    }while(final);
    for(int i = res.size() - 1; i >= 0; --i){
        for(int x : res[i])
            cout << x;
        cout << endl;
    }
    #endif
    return 0;
}