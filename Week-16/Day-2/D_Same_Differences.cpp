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
    map<int, int> mp;
    for (int i = 0; i < n; i++)
        mp[v[i] - i]++;
    ll ans = 0;
    for (auto [a, b] : mp)
    {
        if (b >= 2)
            ans += 1ll * b * (b - 1) / 2;
    }
    cout << ans << "\n";
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