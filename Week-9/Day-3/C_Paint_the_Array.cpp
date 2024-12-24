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
const int N = 3e5;
ll arr[N];
ll gcd(ll x, ll y)
{
    if (!y)
        return x;
    return gcd(y, x % y);
}
void GunJon()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    ll ans = 0;
    for (int i = 1; i <= n; i += 2)
        ans = gcd(ans, arr[i]);
    bool tt = 0;
    for (int i = 2; i <= n; i += 2)
        if (arr[i] % ans == 0)
            tt = 1;
    if (!tt)
    {
        cout << ans << endl;
        return;
    }
    ans = 0;
    for (int i = 2; i <= n; i += 2)
        ans = gcd(ans, arr[i]);
    tt = 0;
    for (int i = 1; i <= n; i += 2)
        if (arr[i] % ans == 0)
            tt = 1;
    if (!tt)
    {
        cout << ans << endl;
        return;
    }
    cout << 0 << endl;
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