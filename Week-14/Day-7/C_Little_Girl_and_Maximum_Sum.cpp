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
    int n, m;
    cin >> n >> m;
    vector<int> v(n), a(n + 1, 0), b(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(it(v));
    for (int i = 0, x, y; i < m; i++)
    {
        cin >> x >> y;
        a[x - 1]++;
        a[y]--;
    }
    for (int i = 0, w = 0; i < n; i++)
        w += a[i], b[i] = w;

    sort(it(b));
    ll ans = 0;
    for (int i = 0; i < n; i++)
        ans += (ll)v[i] * b[i];
    cout << ans << nl;
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