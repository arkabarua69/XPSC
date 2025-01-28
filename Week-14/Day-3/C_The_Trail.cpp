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
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll v[n][k];
    ll a[n] = {}, b[k] = {};
    for (int i = 0; i < n; i++)
        for (int j = 0; j < k; j++)
        {
            cin >> v[i][j];
            a[i] += v[i][j], b[j] += v[i][j];
        }
    ll x = 0, y = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'D')
        {
            v[x][y] = -a[x],
            a[x] += v[x][y],
            b[y] += v[x][y],
            x++;
        }
        else
        {
            v[x][y] = -b[y],
            a[x] += v[x][y],
            b[y] += v[x][y],
            y++;
        }
    }
    v[n - 1][k - 1] = -a[n - 1];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
            cout << v[i][j] << ' ';
        cout << nl;
    }
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