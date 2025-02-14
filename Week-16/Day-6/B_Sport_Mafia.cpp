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

    ll x = 2 * (k + n);
    for (ll a = 0; a * a + 3 * a <= x; ++a)
    {
        if (a * a + 3 * a == x)
        {
            cout << (n - a) << nl;
            return;
        }
    }
    assert(false);
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