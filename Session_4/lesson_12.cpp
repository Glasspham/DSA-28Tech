#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; getline(cin,s);
    stringstream ss(s);
    string tmp; int cnt = 0;
    while(ss >> tmp){
        bool f = true;
        for(char c : tmp)
            if(islower(c))
                f = false;
        if(f) ++cnt;
    }
    cout << cnt << endl;
    return 0;
}