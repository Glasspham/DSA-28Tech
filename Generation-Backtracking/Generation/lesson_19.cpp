#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#if 0 // Sinh
int a[1001], n, ok = 1;
void sinh(){
    int i = n / 2;
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        --i;
    }
    if(i == 0) ok = 0;
    else a[i] = 1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    if(n % 2 == 0){
        while(ok){
            for(int i = 1; i <= n / 2; ++i)
                cout << a[i];
            for(int i = n / 2; i >= 1; --i)
                cout << a[i];
            cout << endl;
            sinh();
        }
    }else{
        while(ok){
            for(int u = 0; u <= 1; ++u){
                for(int i = 1; i <= n / 2; ++i)
                    cout << a[i];
                cout << u;
                for(int i = n / 2; i >= 1; --i)
                    cout << a[i];
                cout << endl;   
            }
            sinh();
        }
    }
    return 0;
}
#endif

#if 1 // Quay lui
int a[1001], n;
void Try(int i){
    for(int j = 0; j <= 1; ++j){
        a[i] = j;
        if(i <= n / 2){
            for(int l = 1; l <= n / 2; ++l)
                cout << a[l];
            for(int l = n / 2; l >= 1; --l)
                cout << a[l];
            cout << endl;
        }
        if(i < n / 2) Try(i + 1);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    Try(1);
    return 0;
}
#endif