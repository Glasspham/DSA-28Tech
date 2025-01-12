#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string arr;
    for (int i = 0; i < n; ++i)
    {
        char c;
        cin >> c;
        arr += c;
    }
    string name = "28tech";
    int st = 0;
    for (char c : name)
    {
        auto it = arr.find(c, st);
        if (it != string::npos and it % 2 == 0)
            st = it + 1;
        else
        {
            cout << "HCET82\n";
            return 0;
        }
    }
    cout << "28TECH\n";
    return 0;
}