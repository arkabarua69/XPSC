#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define it(_) (_).begin(), (_).end()
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define Speed_code               \
    ios::sync_with_stdio(false); \
    cin.tie(0);
void GunJon()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    vector<vector<int>> a(n + 1, vector<int>(n + 1, 0));
    int gx[2] = {0, 1};
    int gy[2] = {-1, 0};

    function<void(int, int, int &, int)> dfs = [&](int x, int y, int &p, int val)
    {
        if (x > n || y < 1)
            return;
        if (a[x][y])
            return;
        if (p == 0)
            return;
        a[x][y] = val;
        p--;
        if (p == 0)
            return;
        for (int i = 0; i < 2; i++)

            dfs(x + gx[i], y + gy[i], p, val);
    };

    for (int i = 1; i <= n; i++)
    {
        int p = v[i];
        dfs(i, i, p, v[i]);
        if (p > 0)
        {
            cout << -1 << nl;
            return;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << a[i][j] << " ";
        }
        cout << nl;
    }
}
int main()
{
    Speed_code;
    // int $;
    // cin >> $;
    // while ($--)
    GunJon();
}
/*Code by Gunjon*/