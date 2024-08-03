#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int num){
    if(num < 10) return true;
    string str = to_string(num);
    for(int i = 0; i < str.length() / 2; ++i)
        if(str[i] != str[str.length() - i - 1])
            return false;
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, cnt = 0; cin >> n;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            int tmp; cin >> tmp;
            if(j <= i && isPalindrome(tmp))
                ++cnt;
        }
    }
    cout << cnt << endl;
    return 0;
}