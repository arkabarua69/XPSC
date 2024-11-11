#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl endl
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int x[200][200];
        map<int, int> mp, mp0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> x[i][j];
                mp[i - j] += x[i][j];
                mp0[i + j] += x[i][j];
            }
        }

        int ans = 0;

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                int a = mp[i - j] + mp0[i + j] - x[i][j];
                ans = max(ans, a);
            }
        }

        cout << ans << nl;
    }
}
/*Code by Gunjon*/