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
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    for (int i = 0; i < n; i++)
        a[i] -= b[i];

    vector<ll> c, d;
    for (int i = 0; i < n; i++)
        (a[i] > 0) ? c.push_back(a[i]) : d.push_back(a[i]);
    sort(it(c));
    sort(d.rbegin(), d.rend());
    int j = 0;
    ll ans = 0;
    for (int i = 0; i < c.size(); i++)
    {
        while (j < d.size() and c[i] + d[j] > 0)
            j++;
        ans += j;
    }
    ans += ((ll)c.size() * (c.size() - 1)) / 2;

    cout << ans << endl;
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