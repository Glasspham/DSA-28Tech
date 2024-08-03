#include<bits/stdc++.h>
using namespace std;

using ll = long long;
bool isPrime(int num){
    if(num <= 1) return false;
    for(int i = 2; i * i <= num; ++i)
        if(num % i == 0)
            return false;
    return true;
}
vector<int> prime;

int n, k, a[100];
vector<string>res;
void Try(int i, int idx, int sum){
    for(int j = idx; j < prime.size(); ++j){
        a[i] = prime[j];
        if(sum + prime[j] == n and i == k){
            string str;
            for(int l = 1; l <= k; ++l){
                str += to_string(a[l]);
                if(l != i) str += " + ";
            }
            res.push_back(str);
        }else if(sum + prime[j] < n and i < k)
            Try(i + 1, j + 1, sum + prime[j]);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    for(int i = 2; i <= 499; ++i)
        if(isPrime(i))
            prime.push_back(i);
    cin >> n >> k;
    Try(1,0,0);
    if(res.size() == 0) cout << "NOT FOUND\n";
    else{
        for(string s : res) 
            cout << s << endl;
    }
    return 0;
}