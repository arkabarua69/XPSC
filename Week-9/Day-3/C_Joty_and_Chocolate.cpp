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
    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    ll x = n / a, y = n / b, z = a / __gcd(a, b) * b, $ = n / z;
    x -= $, y -= $;
    cout << x * p + y * q + max(p, q) * $ << nl;
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