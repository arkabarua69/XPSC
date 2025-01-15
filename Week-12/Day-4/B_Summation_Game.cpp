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
const int N = 2e5 + 10;
void GunJon()
{
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> a(n + 1), b(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> b[i];
    sort(it(b));
    partial_sum(it(b), a.begin());
    int ans = -1e18;
    for (int i = n - k; i <= n; i++)
    {
        ll j = max(0, i - x);
        ans = max(ans, -(a[i] - a[j]) + a[j]);
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