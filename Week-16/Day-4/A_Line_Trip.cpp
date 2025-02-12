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
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;
    int ans = v[0];
    for (int i = 1; i < n; i++)
        ans = max(ans, v[i] - v[i - 1]);
    ans = max(ans, 2 * (a - v.back()));
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