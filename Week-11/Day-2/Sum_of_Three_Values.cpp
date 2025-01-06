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
    ll n, x;
    cin >> n >> x;
    vector<pair<ll, ll>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = i + 1;
    }
    sort(it(v));
    for (int i = 0; i < n; i++)
    {
        ll tar = x - v[i].first;
        ll l = i + 1, r = n - 1;
        while (l < r)
        {
            ll sum = v[l].first + v[r].first;
            if (sum == tar)
            {
                cout << v[i].second << " " << v[l].second << " " << v[r].second << nl;
                return;
            }
            else if (sum < tar)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
    }
    cout << "IMPOSSIBLE" << nl;
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