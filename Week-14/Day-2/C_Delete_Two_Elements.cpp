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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    ll sum = accumulate(it(v), 0LL);
    __int128 goal8 = __int128(sum) * (n - 2);
    if (goal8 % n != 0)
    {
        cout << 0 << nl;
        return;
    }
    ll q = sum - (ll)(goal8 / n);
    map<ll, int> mp;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        auto it = mp.find(v[i]);
        if (it != mp.end())
            ans += it->second;
        mp[q - v[i]] += 1;
    }
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