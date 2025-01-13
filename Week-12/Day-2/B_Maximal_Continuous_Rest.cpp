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
    cin >> n;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        v.push_back(m);
    }
    for (int i = 0; i < n; i++)
        v.push_back(v[i]);

    ll ans = 0, x = 0;
    for (int i = 0; i < 2 * n; i++)
    {
        if (v[i] == 1)
            x++;
        else
            ans = max(ans, x), x = 0;
    }
    cout << ans;
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