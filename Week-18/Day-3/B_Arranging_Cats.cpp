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
    ll n, x = 0, y = 0, z = 0;
    cin >> n;
    string a, b;
    cin >> a >> b;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == '1')
            x++;
        if (b[i] == '1')
            y++;
        if (a[i] == '1' and b[i] == '1')
            z++;
    }
    (x >= y) ? cout << x - z << nl : cout << y - z << nl;
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