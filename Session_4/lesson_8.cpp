#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;

    #if 1
    bool f1 = false, f2 = false, f3 = false, f4 = false, f5 = false, f6 = false;
    while(!s.empty()){
        if(s.find("2") != string::npos)
            s.erase(s.find("2"),1);
        else f1 = true;

        if(s.find("8") != string::npos)
            s.erase(s.find("8"),1);
        else f2 = true;

        if(s.find("t") != string::npos)
            s.erase(s.find("t"),1);
        else f3 = true;

        if(s.find("e") != string::npos)
            s.erase(s.find("e"),1);
        else f4 = true;

        if(s.find("c") != string::npos)
            s.erase(s.find("c"),1);
        else f5 = true;

        if(s.find("h") != string::npos)
            s.erase(s.find("h"),1);
        else f6 = true;

        if(f1 and f2 and f3 and f4 and f5 and f6){
            cout << s << endl;
            return 0;
        }
    }
    cout << "EMPTY\n";
    #endif

    #if 1
    unordered_set<char> charsToRemove = {'2', '8', 't', 'e', 'c', 'h'};
    string result;
    for(char c : s)
        if(charsToRemove.find(c) == charsToRemove.end())
            result += c;

    if(result.empty()) cout << "EMPTY" << endl;
    else cout << result << endl;
    #endif
    return 0;
}