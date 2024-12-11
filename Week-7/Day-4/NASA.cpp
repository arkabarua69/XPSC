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
    vector<int> pl;
    auto ispl = [](int e) -> bool
    {
        int x = 0, tm = e;
        while (e > 0)
        {
            x = x * 10 + (e % 10);
            e /= 10;
        }
        return (x == tm);
    };
    for (int i = 1; i <= (1 << 17); i++)
    {
        if (ispl(i))
            pl.push_back(i);
    }
    ll n;
    cin >> n;
    vector<ll> v(n), a(1 << 17, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        a[v[i]]++;
    }
    ll ans = 0;
    for (int e : pl)
    {
        for (int j = 0; j < n; j++)
            ans += a[v[j] ^ e];
    }
    ans /= 2;
    for (int i = 0; i < (1 << 17); i++)
        ans += (a[i] * (a[i] + 1)) / 2;

    cout << ans << endl;
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