#include<bits/stdc++.h>
using namespace std;

using ll = long long;

// Sinh xâu nhị phân
#if 0
int x[100], n;
void in(){
    for(int i = 1; i <= n; ++i)
        cout << x[i] << ' ';
    cout << endl;
}

void Try(int i){
    for(int j = 0; j <= 1; ++j){
        x[i] = j;
        if(i == n) in();
        else Try(i + 1);
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

// Sinh tổ hợp chập K của N phần tử
#if 0
int x[1001], n, k;
void in(){
    for(int i = 1; i <= k; ++i)
        cout << x[i];
    cout << endl;
}

void Try(int i){
    for(int j = x[i - 1] + 1; j <= n - k + i; ++j){
        x[i] = j;
        if(i == k) in();
        else Try(i + 1);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    Try(1);
    return 0;
}
#endif

// Sinh hoán vị
#if 0
int x[1001], n, use[1001];
void in(){
    for(int i = 1; i <= n; ++i)
        cout << x[i];
    cout << endl;
}

void Try(int i){
    for(int j = 1; j <= n; ++j){
        if(!use[j]){
            x[i] = j;
            use[j] = 1;
            if(i == n) in();
            else Try(i + 1);
            use[j] = 0;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    memset(use, 0 , size(use));
    Try(1);
    return 0;
}
#endif

// Sinh chỉnh hợp chập K của N phần tử
#if 0
int x[1001], n, k;
void in(){
    for(int i = 1; i <= k; ++i)
        cout << x[i];
    cout << endl;
}

void Try(int i){
    for(int j = 1; j <= n; ++j){
        x[i] = j;
        if(i == k) in();
        else Try(i + 1);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    Try(1);
    return 0;
}
#endif