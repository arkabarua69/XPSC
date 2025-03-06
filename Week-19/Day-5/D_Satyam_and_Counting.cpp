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
    vector<pair<ll, ll>> points(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> points[i].first >> points[i].second;
    }

    vector<vector<ll>> mp(n + 1, vector<ll>(2, 0));
    for (const auto &p : points)
    {
        mp[p.first][p.second] = 1;
    }

    ll cnt = 0, ans = 0; 
    for (int i = 0; i <= n; ++i)
    {
        if (mp[i][0] == 1 && mp[i][1] == 1)
            cnt++;
    }

    for (int i = 0; i < n - 1; ++i)
    {
        if (mp[i][1] == 1 && mp[i + 1][0] == 1 && mp[i + 2][1] == 1)
            ans++;
        if (mp[i][0] == 1 && mp[i + 1][1] == 1 && mp[i + 2][0] == 1)
            ans++;
    }

    cout << ans + cnt * (n - 2) << nl;
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