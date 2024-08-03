#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int a1[1001], used[1001], n;
char a2[1001];
vector<string>res1, res2;

void in1(){
    string num = "";
    for(int i = 1; i <= n; ++i)
        num += to_string(a1[i]);
    res1.push_back(num);
}

void Try1(int i){
    for(int j = 1; j <= n; ++j){
        a1[i] = j;
        if(i == n) in1();
        else Try1(i + 1);
    }
}

void in2(){
    string str = "";
    for(int i = 1; i <= n; ++i)
        str += a2[i];
    res2.push_back(str);
}

void Try2(int i ){
    for(int j = 'A'; j <= 'A' + n - 1; ++j){
        if(!used[j]){
            used[j] = 1;
            a2[i] = j;
            if(i == n) in2();
            else Try2(i + 1);
            used[j] = 0;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    Try1(1); Try2(1);
    for(auto it1 : res2) 
        for(auto it2 : res1) 
            cout << it1 << it2 << endl;
    return 0;
}