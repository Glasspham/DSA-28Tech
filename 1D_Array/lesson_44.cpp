#include<bits/stdc++.h> 
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    unordered_map<int, int> count;
    count[0] = 1;
    int prefix = 0, result = 0;
    for(int num : a) {
        if(num % 2 == 0) prefix--;
        else prefix++;
        if(count.find(prefix) != count.end())
            result += count[prefix];
        count[prefix]++;
    }
    cout << result;
    return 0;
}