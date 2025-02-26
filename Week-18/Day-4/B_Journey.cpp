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
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    ll x = a + b + c, y = n / x, z = n % x, ans = y * 3, q = y * x;
    if (z > 0)
    {
        q += a, ans++;
        if (q >= n)
        {
            cout << ans << nl;
            return;
        }
        q += b, ans++;
        if (q >= n)
        {
            cout << ans << nl;
            return;
        }
        q += c, ans++, cout << ans << nl;
    }
    else
        cout << ans << nl;
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