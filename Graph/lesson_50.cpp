#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int b, n, res = 0;
        cin >> b >> n;
        while (n)
        {
            res += (n % b) * (n % b);
            n /= b;
        }
        cout << res << endl;
    }
    return 0;
}