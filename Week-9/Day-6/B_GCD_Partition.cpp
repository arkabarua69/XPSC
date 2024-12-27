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
    vector<ll> v(n);
    for (auto &x : v)
        cin >> x;
    partial_sum(it(v), v.begin());
    ll ans = 0;
    for (int i = 0; i + 1 < n; i++)
        ans = max(ans, __gcd(v[i], v.back() - v[i]));
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