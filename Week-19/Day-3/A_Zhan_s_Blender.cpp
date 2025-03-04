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
ll ceil(ll n, ll d)
{
    return (n + (d - 1)) / d;
}
void GunJon()
{
    ll a, b, x;
    cin >> a >> b >> x;

    ll ans = a - b * ceil(a, x);
    if (ans <= 0)
    {
        cout << ceil(a, x) << "\n";
        return;
    }

    cout << ceil(a, x) + ceil(ans, b) << "\n";
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