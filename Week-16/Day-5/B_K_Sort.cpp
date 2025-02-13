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
    vector<ll> v(n);
    for (ll &x : v)
        cin >> x;
    vector<ll> a = v;
    for (int i = 1; i < n; ++i)
        a[i] = max(a[i], a[i - 1]);

    ll ans = 0, mx = 0;
    for (int i = 0; i < n; ++i)
    {
        ans += a[i] - v[i];
        mx = max(mx, a[i] - v[i]);
    }
    cout << ans + mx << nl;
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