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
    int n, a;
    cin >> n >> a;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 30; j >= 0; j--)
        {
            if ((1 << j) & v[i])
                mp[j]++;
        }
    }
    ll ans = 0;
    for (int i = 30; i >= 0; i--)
    {
        int x = n - mp[i];
        if (x <= a)
        {
            ans += (1 << i);
            a -= x;
        }
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