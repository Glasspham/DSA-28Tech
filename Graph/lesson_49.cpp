#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, a[105][105];
string d[105][105];

char xuly(string s)
{
    int res = 0, h = 1;
    for (int i = 3; i >= 0; --i)
    {
        res += (s[i] - '0') * h;
        h *= 2;
    }
    if (res < 10)
        return res + '0';
    return res - 10 + 'A';
}

string xuly2(string s)
{
    int k = 0;
    while (k < s.size() - 1 and s[k] == '0')
        ++k;
    return s.substr(k);
}

string binToHex(string bin)
{
    int mod = bin.size() % 4;
    if (mod != 0)
        bin = string(4 - mod, '0') + bin;
    string res = "";
    for (int i = 0; i < bin.size(); i += 4)
        res += xuly(bin.substr(i, 4));
    return xuly2(res);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            cin >> a[i][j];
    string s = "";
    for (int i = 1; i <= n; ++i)
    {
        s += to_string(a[1][i]);
        d[1][i] = s;
    }
    s = "";
    for (int i = 1; i <= n; ++i)
    {
        s += to_string(a[i][1]);
        d[i][1] = s;
    }
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            d[i][j] = max(d[i - 1][j], d[i][j - 1]) + to_string(a[i][j]);
    cout << uppercase << hex << bitset<100>(d[n][n]).to_ulong() << endl;
    cout << binToHex(d[n][n]);
    return 0;
}