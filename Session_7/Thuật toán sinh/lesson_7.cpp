#include<bits/stdc++.h>
using namespace std;

using ll = long long;

#if 0 // Hàm có sẵn next_permutation()
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<string> name(n);
    for(string &s : name) cin >> s;
    do{
        for(string s : name) cout << s << ' ';
        cout << endl;
    }while(next_permutation(name.begin(), name.end()));
    return 0;
}
#endif

#if 1 // Hàm tự viết
vector<string> names;
vector<int> indices;
int n, final = 1;

void ktao(){
    indices.resize(n);
    for(int i = 0; i < n; ++i)
        indices[i] = i;
}

void sinh(){
    int i = n - 2;
    while(i >= 0 && indices[i] > indices[i + 1]) --i;
    if(i < 0) final = 0;
    else{
        int j = n - 1;
        while(indices[i] > indices[j]) --j;
        swap(indices[i], indices[j]);
        reverse(indices.begin() + i + 1, indices.end());
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n; names.resize(n);
    for(string &s : names) cin >> s;
    sort(names.begin(), names.end());
    ktao();
    while(final){
        for(int x : indices) 
            cout << names[x] << ' ';
        cout << endl;
        sinh();
    }
    return 0;
}
#endif