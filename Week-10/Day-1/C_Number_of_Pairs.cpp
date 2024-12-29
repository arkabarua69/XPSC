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
    ll arr[200010];
    ll a, b;
    cin >> n >> a >> b;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    sort(arr + 1, arr + n + 1);
    ll ans = 0;
    for (int i = 1; i < n; i++)
    {
        int s = lower_bound(arr + i + 1, arr + n + 1, a - arr[i]) - arr, t = upper_bound(arr + i + 1, arr + n + 1, b - arr[i]) - arr - 1;
        ans += (t - s + 1);
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