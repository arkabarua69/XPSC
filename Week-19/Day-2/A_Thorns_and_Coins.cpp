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

    ll n;
    cin >> n;
    string s;
    cin >> s;

    ll x = n;
    for (ll i = 0; i < n - 1; i++)
    {
        if (x == n && s[i] == '*' && s[i + 1] == '*')
            x = i;
    }
    ll ans = 0;
    for (ll i = 0; i < x; i++)
        ans += (s[i] == '@');

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