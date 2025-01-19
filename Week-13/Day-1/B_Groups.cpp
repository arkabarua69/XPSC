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
int n, a[1005][5], b[2][2];
void GunJon()
{

    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i][0] >> a[i][1] >> a[i][2] >> a[i][3] >> a[i][4];

    bool f = false;

    for (int x = 0; x < 5; x++)
    {
        for (int y = 0; y < 5; y++)
        {
            if (x != y)
            {
                b[0][0] = b[0][1] = b[1][0] = b[1][1] = 0;
                for (int i = 1; i <= n; ++i)
                    ++b[a[i][x]][a[i][y]];
                if (b[0][0])
                    continue;
                if (b[0][1] <= n / 2 && b[1][0] <= n / 2)
                {
                    f = true;
                    break;
                }
            }
        }
        if (f)
            break;
    }

    (f ? cy : cn);
}
int main()
{
    Speed_code;
    int $;
    cin >> $;
    while ($--)
        GunJon();
}
/*Code by Gunjon*/