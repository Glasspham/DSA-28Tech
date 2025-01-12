#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, m, mat[1005][1005];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (i == j)
                mat[i][j] = 0;
            else
                mat[i][j] = 1e9;
        }
    }
    for (int i = 0; i < m; ++i)
    {
        int x, y, z;
        cin >> x >> y >> z;
        mat[x][y] = z;
        mat[y][x] = z;
    }
    for (int l = 1; l <= n; ++l)
        for (int i = 1; i <= n; ++i)
            for (int j = 1; j <= n; ++j)
                mat[i][j] = min(mat[i][j], mat[i][l] + mat[l][j]);
    int q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        cout << mat[x][y] << endl;
    }
    return 0;
}