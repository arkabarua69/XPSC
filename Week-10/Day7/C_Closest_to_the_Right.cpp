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
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    while (k--)
    {
        ll val;
        cin >> val;
        int lo = 0, hi = n - 1, ans = -1;
        while (lo <= hi)
        {
            int mid = (hi + lo) / 2;
            if (v[mid] < val)
            {
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
                ans = mid;
            }
        }
        if (ans == -1)
            ans = n;
        cout << ans + 1 << nl;
    }
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