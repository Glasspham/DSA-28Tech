#include<bits/stdc++.h>
using namespace std;

using ll = long long;
char a[1001], c;
int used[256];

bool Check(char s){
    return s == 'A' or s == 'E';
}

void XuLy(){
    for(int i = 2; i <= c - 'A'; ++i)
        if(Check(a[i]) and !Check(a[i + 1]) and !Check(a[i - 1]))
            return;
    for(int i = 1; i <= c - 'A' + 1; ++i)
        cout << a[i];
    cout << endl;
}

void Try(int i){
    for(char j = 'A'; j <= c; ++j){
        if(!used[j]){
            a[i] = j;
            used[j] = 1;
            if(i == c - 'A' + 1) XuLy();
            else Try(i + 1);
            used[j] = 0;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> c;
    Try(1); 
    return 0;
}