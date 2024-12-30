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
    ll n, m;
    cin >> n >> m;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
        cin >> v[i];
    vector<ll> dp(n);
    dp[0] = v[0];
    for (ll i = 1; i < n; i++)
        dp[i] = max(v[i], dp[i - 1]);
    vector<ll> x(n, 0);
    x[0] = v[0];
    for (ll i = 1; i < n; i++)
        x[i] = x[i - 1] + v[i];
    while (m--)
    {
        ll a;
        cin >> a;
        ll ans = upper_bound(it(dp), a) - dp.begin();
        ans--;
        (ans < 0) ? cout << "0" << " " : cout << x[ans] << " ";
    }
    cout << nl;
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