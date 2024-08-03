#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#if 0 // Hàm có sẵn
int a[101], n;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n; for(int i = 0; i < n; ++i) cin >> a[i];
    prev_permutation(a, a + n);
    do{
    	for(int i = 0; i < n; ++i) cout << a[i] << ' ';
    	cout << endl;
    }while(prev_permutation(a, a + n));
    return 0;
}
#endif

#if 1 // Quay lui
int a[101], n, x[101];
void in(){
	for(int i = 1; i <= n; ++i)
		cout << a[i] << ' ';
	cout << endl;
}

void Try(int i){
	for(int j = n; j >= 1; --j)
		if(!x[j]){
			a[i] = j;
			x[j] = 1;
			if(i == n) in();
			else Try(i + 1);
			x[j] = 0;
		}
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    Try(1);
    return 0;
}
#endif