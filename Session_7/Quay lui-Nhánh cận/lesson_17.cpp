#include<bits/stdc++.h>
using namespace std;

using ll = long long;
string storage = "()[]{}";
string res;
int n;
vector<string> save;
bool Check(){
    stack<char>st;
    for(char c : res){
        if(c == '(' or c == '[' or c == '{') st.push(c);
        else{
            if(st.empty()) return false;
            char y = st.top(); st.pop();
            if((c == ')' and y != '(') or (c == ']' and y != '[') or (c == '}' and y != '{'))
                return false;
        }
    }
    if(st.empty()) return true;
    return false;
}

void Try(){
    for(int j = 0; j < storage.size(); ++j){
        res += storage[j];
        if(res.size() == n){
            if(Check())
                save.push_back(res);
        }else Try();
        res.pop_back();
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    if(n % 2 == 1){
        cout << "NOT FOUND";
        return 0;
    }
    Try();
    sort(save.begin(),save.end());
    for(auto it : save) cout << it << ' ';
    return 0;
}