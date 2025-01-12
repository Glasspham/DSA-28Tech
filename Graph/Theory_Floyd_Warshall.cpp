#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, m, matrix[1005][1005];
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
                matrix[i][j] = 0;
            else
                matrix[i][j] = 1e9;
        }
    }
    for (int i = 0; i < m; ++i)
    {
        int x, y, w;
        cin >> x >> y >> w;
        matrix[x][y] = w;
        matrix[y][x] = w;
    }
    for (int l = 1; l <= n; ++l)
        for (int i = 1; i <= n; ++i)
            for (int j = 1; j <= n; ++j)
                matrix[i][j] = min(matrix[i][j], matrix[i][l] + matrix[l][j]);
    return 0;
}