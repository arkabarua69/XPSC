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
    ll n, k, d;
    cin >> n >> k >> d;
    vector<ll> v(n);
    for (auto &i : v)
        cin >> i;
    ll l = 0, r = d - 1;
    vector<ll> a(k + 1, 0);
    ll ans = 0;
    for (ll i = 0; i < d; i++)
    {
        if (a[v[i]] == 0)
            ans++;
        a[v[i]]++;
    }
    ll anss = ans;
    while (r + 1 < n)
    {
        if (a[v[l]] == 1)
            ans--;
        a[v[l]]--;
        l++;
        r++;
        if (a[v[r]] == 0)
            ans++;
        a[v[r]]++;
        anss = min(anss, ans);
    }
    cout << anss << nl;
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