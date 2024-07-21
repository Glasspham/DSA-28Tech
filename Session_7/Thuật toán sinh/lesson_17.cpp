#include<bits/stdc++.h>
using namespace std;

using ll = long long;
string str;

void sinh(){
    int i = str.length() - 1;
    while(i >= 0 and str[i] >= str[i + 1]) --i;
    if(i == -1){
        cout << "NOT EXIST";
        return;
    }else{
        int j = str.size() - 1;
        while(str[i] >= str[j]) --j;
        swap(str[i], str[j]);
        reverse(str.begin() + i + 1, str.end());
        cout << str;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> str;
    if(next_permutation(str.begin(), str.end())) cout << str;
    else cout << "NOT EXIST";
    cout << endl;
    sinh();
    return 0;
}