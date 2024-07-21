#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#if 1 // Quay lui
int n;
char a[1001], c;
void in(){
	for(int i = 1; i <= n; ++i)
		cout << a[i];
	cout << endl;
}

void Try(int i){
	for(int j = 'A'; j <= c; ++j){
		a[i] = j;
		if(i == n) in();
		else Try(i + 1);
	}
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> c >> n;
    Try(1);
    return 0;
}
#endif

#if 1 // Sinh
int a[1001], n, k, ok = 1;
void ktao(){
    for(int i = 1; i <= k; ++i)
        a[i] = 1;
}

void sinh(){
    int i = k;
    while(i >= 1 and a[i] == n) --i;
    if(i == 0) ok = 0;
    else{
        a[i]++;
        for(int j = i + 1; j <= k; ++j)
            a[j] = 1;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    char c; cin >> c >> k;
    n = c - 'A' + 1;
    ktao();
    while(ok){
        for(int i = 1; i <= k; ++i)
            cout << char(a[i] + 'A' - 1);
        cout << endl;
        sinh();
    }
    return 0;
}
#endif