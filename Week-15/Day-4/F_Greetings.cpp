#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define nl endl
#define it(_) (_).begin(), (_).end()
#define cy cout << "YES" << endl
#define cn cout << "NO" << endl
#define Speed_code               \
    ios::sync_with_stdio(false); \
    cin.tie(0);

#define sz(yo) (ll) yo.size()
template <typename T>
using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void GunJon()
{
    ll n;
    cin >> n;

    vector<pair<ll, ll>> a;
    for (ll i = 1; i <= n; i++)
    {
        ll x, y;
        cin >> x >> y;
        a.push_back({x, y});
    }

    o_set<ll> pbds;
    sort(a.begin(), a.end());
    for (auto [x, y] : a)
    {
        pbds.insert(y);
    }

    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        pbds.erase(a[i].second);
        ans += (pbds.order_of_key(a[i].second));
    }

    cout << ans << '\n';
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
